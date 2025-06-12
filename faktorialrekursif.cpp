#include <iostream>

int faktorial(int n) {
    if (n < 0) {
        return -1;
    } else if (n > 1) {
        return (n * faktorial(n - 1));
    } else {
        return 1;
    }
}
int main() {
    int n;
    std::cout << "masukan nilai yang ingin di cari faktorial nya ";
    std::cin >> n;
    int N_faktorial = faktorial(n);
    std::cout << "hasil faktorial " << N_faktorial;
}