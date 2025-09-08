#include <iostream>
long int n;
long int i = 1, sum = 0;
void Ulang(int x) {

    if (i > x) {
        std::cout << " " << std::endl;
        std::cout << "adalah " << sum;

    } else {
        if (i == 1) {
            std::cout << i;
        } else {
            std::cout << " + " << i;
        }
        sum += i;
        i++;
        Ulang(x);
    }
}
int main() {
    std::cout << " masukan batas nilai ";
    std::cin >> n;
    std::cout << "hasil penjumlahan dari ";
    Ulang(n);
}
