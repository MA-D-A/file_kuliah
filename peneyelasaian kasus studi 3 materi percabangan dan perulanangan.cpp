#include <iostream>
int N_terbesar = 0, N_terkecil = 0, J_ganjil = 0, J_genap = 0;
int main() {
    std::cout << "ini adalah program mencari Bilangan Terbesar & terkecil Dan "
                 "Jumlah bilangan genap & ganjil\n\n";
    std::cout << "masukan 5 angka  (dengan jeda spasi atau enter): ";
    for (int i = 1; i <= 5; i++) {
        int j;
        std::cin >> j;
        if (N_terbesar < j || N_terbesar == 0) {
            N_terbesar = j;
            if (j % 2 != 0) {
                J_ganjil++;
            } else if (j % 2 == 0) {
                J_genap++;
            }
        } else if (N_terkecil > j || N_terkecil == 0) {

            N_terkecil = j;
        }
    }
    std::cout << " " << std::endl;
    std::cout << "Bilangan terbesar adalah " << N_terbesar << std::endl;
    std::cout << "Bilangan terkecil adalah " << N_terkecil << std::endl;
    std::cout << "Jumlah bilangan ganjil adalah " << J_ganjil << std::endl;
    std::cout << "Jumlah bilangan genap adalah " << J_genap << std::endl;
}