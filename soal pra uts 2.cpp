#include <iostream>
#include <string>
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
    cin >> N;

    Kendaraan pengguna[N];
    for (int i = 0; i < N; i++) {
        cout << "masukana No rangka Kendaraan ";
        cin >> pengguna[i].No_kendaraan;
        cout << "masukana nama pemilik kendaraan ";
        cin.ignore();
        // memakai getline harus dibarengi denagn llibrary string kenapa? karena
        // dalam c++ standar  fungsi getline sendiri tidak termasuk di dalamany
        getline(cin, pengguna[i].Nama);
        cout << "masukana Asal daerah kendaraan ";
        getline(cin, pengguna[i].Asal_Daerah);
        cout << "masukana Merek kendaraan ";
        cin >> pengguna[i].Merk;
        cout << "masukana Tahun  keluaran kendaraan ";
        cin >> pengguna[i].Tahun_keluaran;
    }
    for (int i = 0; i < N; i++) {

        if (pengguna[i].Asal_Daerah == "Tulang Bawang" &&
            pengguna[i].Tahun_keluaran >= 2010) {
            cout << pengguna[i].Asal_Daerah << "|" << pengguna[i].No_kendaraan
                 << "|" << pengguna[i].Nama << "|" << pengguna[i].Merk << "|"
                 << pengguna[i].Tahun_keluaran << endl;
        }
    }
}