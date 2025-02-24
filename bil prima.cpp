#include <iostream>
int batasAtas, batasBawah, status, i;
int main() {

    std::cout << "Masukkan batas atas pencarian bil prima : ";
    std::cin >> batasAtas;
    batasBawah = 2;
    do {
        status = 0;
        for (i = 2; i < batasBawah; i++)
            if (batasBawah % i == 0) {
                status++;
                break;
            }
        if (status == 0)
            std::cout << batasBawah << ", ";
        batasBawah++;
    } while (batasBawah <= batasAtas);
    std::cout << "" << std::endl;
    return 0;
}
// kalo input 20 akan menunjukan output 2,3,5,7,11,13,17,19
// mengapa tidak memuncul angka 20? karena kondisi while hanya  akan terpenuhi
// ketika batasbawah belum lebih besar dari  batasatas
// kalo input -6 akan menunjukan outut 2,
// mengapa hanya satu angka? karena di kondisi memiliki  kewajiban batas atas
// lebih dari  batas bawah untuk melakukan perulanangan. menagapa 2 mucul karena
// do while membuat perulangan melakukan setidaknya fungsi satu kali
