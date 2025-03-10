#include <iostream>
using namespace std;

struct Kendaraan {
    string No_kendaraan;
    string Nama;
    string Merk;
    int Tahun_keluaran;
    string Asal_Daerah;
};

int main() {
    int N;
    cout << "Masukkan jumlah kendaraan: ";
    cin >> N;

    Kendaraan pengguna[N];
    for (int i = 0; i < N; i++) {
        cout << "Masukkan No rangka Kendaraan: ";
        cin >> pengguna[i].No_kendaraan;
        cout << "Masukkan nama pemilik kendaraan: ";
        cin.ignore(); // Membersihkan newline character dari input sebelumnya
        getline(cin, pengguna[i].Nama);
        cout << "Masukkan Asal daerah kendaraan: ";
        getline(cin, pengguna[i].Asal_Daerah);
        cout << "Masukkan Merek kendaraan: ";
        cin >> pengguna[i].Merk;
        cout << "Masukkan Tahun keluaran kendaraan: ";
        cin >> pengguna[i].Tahun_keluaran;
    }

    cout << "\nData kendaraan keluaran tahun 2010 atau lebih baru:\n";
    for (int i = 0; i < N; i++) {
        if (pengguna[i].Tahun_keluaran >= 2010) {
            cout << pengguna[i].Asal_Daerah << "|" << pengguna[i].No_kendaraan
                 << "|" << pengguna[i].Nama << "|" << pengguna[i].Merk << "|"
                 << pengguna[i].Tahun_keluaran << endl;
        }
    }

    return 0;
}