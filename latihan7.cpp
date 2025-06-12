#include <iostream>
using namespace std;
#include <string>
struct Data_tugas {
    string nama_tugas;
    string deskripsi;
    string deadline;
    string status;
};
void input_tugas(Data_tugas &tugas) {
    cout << "Masukkan informasi tugas: \n";
    cout << "Nama tugas: ";
    getline(cin, tugas.nama_tugas);
    cout << "deskripsi : ";
    getline(cin, tugas.deskripsi);
    cout << "deadline: ";
    getline(cin, tugas.deadline);
    cout << "Status: ";
    getline(cin, tugas.status);
}
void tampilkan_tugas(Data_tugas &tugas) {
    cout << " " << endl;
    cout << "Informasi tugas:\n";
    cout << "Nama Tugas: " << tugas.nama_tugas << endl;
    cout << "Deskripsi: " << tugas.deskripsi << endl;
    cout << "Deadline: " << tugas.deadline << endl;
    cout << "Status: " << tugas.status << endl;
    cout << " " << endl;
}
void ubah_status(Data_tugas &tugas) { cout << "masukan" }
int main() {
    Data_tugas tugas;
    char y_n;
    input_tugas(tugas);
    tampilkan_tugas(tugas);
    cout << "apakah ingin mengubah status tugas? (y/n): ";
    cin >> y_n;
}