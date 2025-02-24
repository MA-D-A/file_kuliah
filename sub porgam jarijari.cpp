#include <iostream>
const float pi = 3.14;
float Luas, Jari2;
void tutorial() {
    std::cout << "\n\nProgram mengolah jari jari\n";
    std::cout << "============================\n";
    std::cout << "cara kerja program ini : \n";
    std::cout << "1. program akan meminta nilai jari jari\n";
    std::cout << "2.program akan menghiitung luas dari nilai jari jari di kali "
                 "dengan pi sesuai rumus luas ingkaran\n";
    std::cout << "3. program alan menampilkan  berapa luas lingakaran jari "
                 "jari tersebut\n\n\n";
}
// tidak memberikan nilai
void LuasLingkaran(float Jari2) {
    Luas = pi * Jari2 * Jari2;
    std::cout << "nilai luasnya adalah " << Luas;
}

int main() {
    tutorial();
    std::cout << "masukan nilai jari jari : ";
    std::cin >> Jari2;
    LuasLingkaran(Jari2);
}
