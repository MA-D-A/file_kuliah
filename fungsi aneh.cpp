#include <iostream>
int a, b;
// subprogram
float Aneh(int a, int b) {

    if (a > b) {
        return a * b;

    } else if (a == b) {
        return a / b;

    } else {
        return a - b;
    }
}
//
int modulo(int a, int b) { return a % b; }
// main program
int main() {
    std ::cout << "masukan nilai a : ";
    std::cin >> a;
    std ::cout << "masukan nilai b : ";
    std::cin >> b;

    std ::cout << "hasilnya adalah " << Aneh(a, b) << std::endl;
    std ::cout << "modulus nya adalah " << modulo(a, b);
}