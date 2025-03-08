#include <iostream>
#include <vector>
using namespace std;
char Milih_opsi, Opsi_Opsi;
// memnunjukan pilihan opsi dengan barisan cout
void Pilihan_Opsi() {

    cout << "=====================================================\n";
    cout << "program ini mampu memanipulasi array\n";
    cout << "(ketik 'T')Tambah data, jika pengguna memilih opsi ini,  "
         << "maka pengguna akan memasukkan n (jumlah data yang ingin "
            "ditambahkan) "
         << "dan data data tersebut\n";
    cout << "(Ketik'H')Hapus data, opsi ini akan meminta pengguna untuk "
         << "memasukkan sebanyak "
         << "N data terakhir yang ingin dihapus.\n";
    cout << "(Ketik 'S')Tampilkan nilai terbesar, terkecil dan rata rata, jika "
            "opsi ini "
            "dipilih program "
         << "akan menampilkan nilai terbesar terkecil dan rata rata dari data "
            "pada array.\n\n\n ";
}
// melakukan pertambahan nilai menggunakan library vektor menggunakan fungsi
// pushback untuk menambahkan elemen ke barisan akhir pada array dan menggunakan
// referenc &Dataa_siswa guna mengubah data nya secara langsung dari pada
// mengubah data yang di copy note dalam fungsi sebuah vektor jika kita hanya
// memanggil (vector<int> Data_siswa) ia akan membuat copy dari array yang nanti
// akan di manipulasi arraycopyannya. makannya harus menggunakan references
// &data_siswa
void Tambah_Nilai(vector<int> &Data_siswa, int N) {
    cout << "MASUKAN BATAS N ";
    cin >> N;
    int masukin;
    for (int i = 0; i < N; i++) {
        // size digunakan untuk mencari besar dari array data siswa
        cout << "Masukan Nilai ke " << Data_siswa.size() + 1 << " ";
        cin >> masukin;
        Data_siswa.push_back(masukin);
    }
}
// melakukan perulangan yang menampilkan array dalam bentuk{1,33,..,}  dengan
// memakai for each loop
void Perulangan(vector<int> Data_siswa) {
    cout << "data Nilai mahasiswa:" << "{";
    for (int Nilai_siswa : Data_siswa) {
        cout << Nilai_siswa << ",";
    }
    cout << "}\n";
}
// menghapus data terakhir menggunakan  fungsi pop.back yang terdapat apada
// library vektor
void Hapus_Nilai(vector<int> &Data_siswa, int N) {
    cout << "MASUKAN BATAS N ";
    cin >> N;

    for (int i = 0; i < N; i++) {

        Data_siswa.pop_back();
    }
}
// fungsi mencari nilai max ,nilai min, rat2
void Tampilkan_Nmax_Nmin_Rata2(vector<int> Data_siswa) {

    int rata2, total = 0;
    int Max = 0;
    int Min = Data_siswa[0];
    for (int i = 0; i < Data_siswa.size(); i++) {
        if (Max < Data_siswa[i]) {
            Max = Data_siswa[i];
        }
        if (Min > Data_siswa[i]) {
            Min = Data_siswa[i];
        }
        total += Data_siswa[i];
    }
    rata2 = total / Data_siswa.size();
    cout << "Nilai mahasiswa Terbesar: " << Max << "\n";
    cout << "Nilai mahasiswa Terkecil: " << Min << "\n";
    cout << "Nila  RAta2 Mahasiswa:" << rata2;
}
// fungsi utama
int main() {
    vector<int> Data_siswa = {12, 44, 6, 8};
    int N;
    // perulangan guna membuat program bisa   melakukan semua nya kembali
    do {
        bool selesai_lanjut = false;
        Perulangan(Data_siswa);
        Pilihan_Opsi();
        cout << "Pilih  opsi fitur ";
        cin >> Opsi_Opsi;
        switch (Opsi_Opsi) {
        case 'T':
            Tambah_Nilai(Data_siswa, N);
            Perulangan(Data_siswa);
            break;
        case 'H':
            Hapus_Nilai(Data_siswa, N);
            Perulangan(Data_siswa);
            break;
        case 'S':
            Tampilkan_Nmax_Nmin_Rata2(Data_siswa);
            break;
        default:
            cout << "input salah program berhenti\n";
            break;
        }
        // perulangan while guna memastikan bahwa pengguna memberikan input yang
        // benar
        while (selesai_lanjut == false) {
            cout << " \ningin jalankan kode lagi? KETIK Y / N ";
            cin >> Milih_opsi;
            switch (Milih_opsi) {
            case 'N':
                selesai_lanjut = true;
                break;
            case 'Y':
                selesai_lanjut = true;
                break;
            default:
                cout << "\nInputan salah "
                     << "\nsilahkan masukan input dengan benar\n";
            }
        }
    } while (Milih_opsi == 'Y');
    return 0;
}
