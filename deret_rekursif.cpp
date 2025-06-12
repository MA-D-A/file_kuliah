#include <iostream>
int deret(int n) {
    if (n < 0) {
        return -1;
    } else if (n > 1) {
        return (n + deret(n - 1));
    } else {
        return 1;
    }
}
int main() {

    int n;
    std::cout
        << "masukan nilai yang ingin di cari deret S = 1+2+3+4+5+...+n nya ";
    std::cin >> n;
    int S = deret(n);
    std::cout << "hasil penjumlahan deret " << S;
}