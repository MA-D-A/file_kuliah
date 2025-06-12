#include <iostream>
using namespace std;
#include <string>
bool berjalan = true;
struct Menu {
    string nama_MENU;
    int harga;
};

struct Detail {
    string nama;
    Menu menu_Restoran[100];
    int jumlah[100];
    int total_harga;
    int total_menu;
};

Detail pesanan;

Menu menu_Restoran[100] = {
    {"Burger", 20000},
    {"Ayam", 30000},
    {"kopi", 25000},
    {"Teh", 15000},
};
void tampilkan_menu(int i = 0) {
    if (i >= 4) { // Basis
        return;
    }
    cout << i + 1 << ". " << menu_Restoran[i].nama_MENU << " - Rp"
         << menu_Restoran[i].harga << endl;
    tampilkan_menu(i + 1);
}

void Buat_Pesanan() {
    cout << "Masukkan nama Anda: ";
    cin >> pesanan.nama;
    char ya_tidak;
    pesanan.total_menu = 1;
    int i = 0;
    while (i < pesanan.total_menu) {
        tampilkan_menu();
        cout << "Pilih menu ke-" << i + 1 << ": ";
        int pilihan;
        cin >> pilihan;
        pesanan.menu_Restoran[i] = menu_Restoran[pilihan - 1];
        cout << "Jumlah: ";
        cin >> pesanan.jumlah[i];
        pesanan.total_harga +=
            pesanan.menu_Restoran[i].harga * pesanan.jumlah[i];
        cout << "ingin pesan menu lainnya?\n";
        cout << "y/n: ";
        cin >> ya_tidak;
        if (ya_tidak == 'y' || ya_tidak == 'Y') {
            pesanan.total_menu++;
        } else {
            break;
        }
        i++;
    }
    cout << "Total harga: Rp" << pesanan.total_harga << endl;
}

void Cek_keranjang() {
    int min = 0;
    if (pesanan.total_menu == 0) {
        cout << "Keranjang masih kosong!\n";

    } else {
        cout << "Nama Pemesan: " << pesanan.nama << endl;
        cout << "Daftar Pesanan:\n";
        for (int j = 0; j < pesanan.total_menu; j++) {
            pesanan.menu_Restoran[j].nama_MENU =
                pesanan.menu_Restoran[j].nama_MENU;
            for (int i = j; i < pesanan.total_menu; i++) {
                if (char(pesanan.menu_Restoran[i].nama_MENU[i]) <
                    pesanan.menu_Restoran[min].nama_MENU[min]) {
                    min = i;
                }
            }
            Menu temp = pesanan.menu_Restoran[j];
            pesanan.menu_Restoran[j] = pesanan.menu_Restoran[min];
            pesanan.menu_Restoran[min] = temp;

            int tempJumlah = pesanan.jumlah[j];
            pesanan.jumlah[j] = pesanan.jumlah[min];
            pesanan.jumlah[min] = tempJumlah;
        }
        cout << "\nKeranjang Anda:\n";
        for (int i = 0; i < pesanan.total_menu; i++) {
            cout << i + 1 << ". " << pesanan.menu_Restoran[i].nama_MENU
                 << " - Jumlah: " << pesanan.jumlah[i] << " - Harga: Rp"
                 << pesanan.menu_Restoran[i].harga * pesanan.jumlah[i] << endl;
        }
        cout << "Total Harga: Rp" << pesanan.total_harga << endl;

        int maxIndex = 0, minIndex = 0;
        for (int i = 1; i < pesanan.total_menu; i++) {
            if (pesanan.menu_Restoran[i].harga >
                pesanan.menu_Restoran[maxIndex].harga) {
                maxIndex = i;
            }
            if (pesanan.menu_Restoran[i].harga <
                pesanan.menu_Restoran[minIndex].harga) {
                minIndex = i;
            }
            cout << "\nMenu Termahal:\n";
            cout << "Nama Menu: " << pesanan.menu_Restoran[maxIndex].nama_MENU
                 << endl;
            cout << "Jumlah: " << pesanan.jumlah[maxIndex] << endl;
            cout << "Total Harga: Rp"
                 << pesanan.menu_Restoran[maxIndex].harga *
                        pesanan.jumlah[maxIndex]
                 << endl;

            cout << "\nMenu Termurah:\n";
            cout << "Nama Menu: " << pesanan.menu_Restoran[minIndex].nama_MENU
                 << endl;
            cout << "Jumlah: " << pesanan.jumlah[minIndex] << endl;
            cout << "Total Harga: Rp"
                 << pesanan.menu_Restoran[minIndex].harga *
                        pesanan.jumlah[minIndex]
                 << endl;
        }
    }
}

void Tambah_Pesanan() {
    char ya_tidak;
    int i = pesanan.total_menu; // mulai dari menu terakhir yang ada
    while (true) {
        tampilkan_menu();
        cout << "Pilih menu ke-" << i + 1 << ": ";
        int pilihan;
        cin >> pilihan;
        bool found = false;
        for (int j = 0; j < pesanan.total_menu; j++) {
            if (pesanan.menu_Restoran[j].nama_MENU ==
                menu_Restoran[pilihan - 1].nama_MENU) {
                cout << "Menu sudah ada di keranjang. Tambahkan jumlah: ";
                int tambahan;
                cin >> tambahan;
                pesanan.jumlah[j] += tambahan;
                pesanan.total_harga +=
                    menu_Restoran[pilihan - 1].harga * tambahan;
                found = true;
                break;
            }
        }
        if (!found) {
            pesanan.menu_Restoran[i] = menu_Restoran[pilihan - 1];
            cout << "Jumlah: ";
            cin >> pesanan.jumlah[i];
            pesanan.total_harga +=
                pesanan.menu_Restoran[i].harga * pesanan.jumlah[i];
            pesanan.total_menu++;
            i++;
        }
        cout << "Ingin tambah menu lainnya?\n";
        cout << "y/n: ";
        cin >> ya_tidak;
        if (ya_tidak != 'y' && ya_tidak != 'Y') {
            break;
        }
    }
    cout << "Total harga sekarang: Rp" << pesanan.total_harga << endl;
}
int keluar() {
    if (pesanan.total_menu == 0) {
        cout << "Keranjang masih kosong, tidak ada yang dibayar.\n";
        berjalan = false;
        return 0;
    } else {
        cout << "pembayaran dilakuakn pakai pegishop\n";
        cout << "Terima kasih telah menggunakan sistem ini.\n";
        berjalan = false;
        return 0;
    }
}

int main() {

    while (berjalan == true) {
        cout << "\n=== Sistem Pendataan Pesanan ===\n";
        cout << "1. Buat Pesanan\n";
        cout << "2. Cek Keranjang\n";
        cout << "3. Tambah pesanan\n";
        cout << "4.bayar dan keluar\n";
        cout << "Pilih opsi: ";
        int opsi;
        cin >> opsi;

        switch (opsi) {
        case 1:

            Buat_Pesanan();
            break;
        case 2:
            Cek_keranjang();
            break;
        case 3:
            Tambah_Pesanan();
            break;
        case 4:
            keluar();
            break;
        default:
            cout << "Opsi tidak valid!\n";
        }
    }
    return 0;
}