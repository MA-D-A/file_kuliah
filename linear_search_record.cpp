#include <iostream>
#include <string>
int awal = 0, i = 0;
int akhir = n - 1;
int n = 10;
using namespace std;

struct Mahasiswa {
    string nama;
    int nim;
    float ipk;
};
int cari_mahasiswa(int k, int n) {
    bool dapet = false;
    while (i < n && !dapet) {
        if (k == mhs[i].nim) {
            dapet = true;
            cout << "Data Mahasiswa Ditemukan" << endl;
            cout << "Nama: " << mhs[i].nama << endl;
            cout << "NIM: " << mhs[i].nim << endl;
            cout << "IPK: " << mhs[i].ipk << endl;
        } else {
            i++;
        }
    }
}
int main() {
    cout << "Masukkan berapa mahasiswa yang dicari: ";
    Mahasiswa mhs[n];

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, mhs.nama[i]);

    cout << "Masukkan NIM Mahasiswa: ";
    cin >> mhs.nim;

    cout << "Masukkan IPK Mahasiswa: ";
    cin >> mhs.ipk;

    cout << "\nData Mahasiswa:" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "IPK: " << mhs.ipk << endl;
    int K;

    return 0;
}