#include <iostream>
#include <vector>
using namespace std;
char Milih_opsi, Opsi_Opsi;
void Pilihan_Opsi() {

    cout << "}\n";
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
void Tambah_Nilai(vector<int> &Data_siswa, int N) {
    cout << "MASUKAN BATAS N ";
    cin >> N;
    int masukin;
    for (int i = 0; i < N; i++) {
        cout << "Masukan Nilai ke " << Data_siswa.size() + 1 << " ";
        cin >> masukin;
        Data_siswa.push_back(masukin);
    }
}
void Perulangan(vector<int> Data_siswa) {
    cout << "data Nilai mahasiswa:" << "{";
    for (int Nilai_siswa : Data_siswa) {
        cout << Nilai_siswa << ",";
    }
    cout << "}\n";
}
void Hapus_Nilai(vector<int> &Data_siswa, int N) {
    cout << "MASUKAN BATAS N ";
    cin >> N;

    for (int i = 0; i < N; i++) {

        Data_siswa.pop_back();
    }
}
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
int main() {
    vector<int> Data_siswa = {12, 44, 6, 8};
    int N;
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
