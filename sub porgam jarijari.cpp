#include <iostream>
const float pi = 3.14;
float Luas, Jari2;

float LuasLingkaran(float Jari2) {
    Luas = pi * Jari2 * Jari2;
    return Luas;
}

int main() {
    std::cout << "masukan nilai jari jari : ";
    std::cin >> Jari2;
    LuasLingkaran(Jari2);
    std::cout << "luas lingkaran adalah :" << Luas;
}
