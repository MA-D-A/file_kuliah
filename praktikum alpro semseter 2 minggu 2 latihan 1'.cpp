#include <iostream>
using namespace std;
int n;

int N_terbesar = 0, N_terkecil = 0, J_ganjil = 0, J_genap = 0, total = 0;
int main() {

    cout << "masukan jumlah n ";
    cin >> n;

    int angka[n];
    for (int i = 0; i < n; i++) {
        cout << "masukan angka " << i + 1;
        cin >> angka[i];
        if (N_terbesar < angka[i] || N_terbesar == 0) {
            N_terbesar = angka[i];
        }
        if (N_terkecil > angka[i] || N_terkecil == 0) {

            N_terkecil = angka[i];
        }
        total += angka[i];
    }
    int rata_rata;
    rata_rata = total / n;
    cout << " " << std::endl;
    cout << " total adalah " << total << std::endl;
    cout << "rata2 adalah " << rata_rata << std::endl;
    cout << "Bilangan terbesar adalah " << N_terbesar << std::endl;
    cout << "Bilangan terkecil adalah " << N_terkecil << std::endl;
}