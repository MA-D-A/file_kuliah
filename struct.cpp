#include <iostream>
#include <string>
using namespace std;
struct data_mahasiswa {
    string No_absen;
    string Nama;
    string Umur;
};
int main() {
    int N;
    cout << "masukan jumlah siswa ";
    cin >> N;
    data_mahasiswa siswa[N];

    for (int i = 0; i < N; i++) {
        cout << "masukan nama siswa " << i + 1;
        cin >> siswa[i].Nama;
        cout << "masukan no absen ";
        cin >> siswa[i].No_absen;
        cout << "masukan Umur siswa ";
        cin >> siswa[i].Umur;
    }
    for (int j = 0; j < N; j++) {
        cout << "siswa ke " << j + 1;
        cout << "nama siswa  ke " << j + 1 << siswa[j].Nama;
        cout << "no absen siswa ke" << j + 1 << siswa[j].No_absen;
        cout << "umur siswa ke " << j + 1 << siswa[j].Umur;
    }
}