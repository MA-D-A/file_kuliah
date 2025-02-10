#include <iostream>
int N, Total = 0;

int main() {
    std::cout << "masukan  nila n: ";
    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        std::cout << i << " ";
        Total += i;
    }
    std::cout << "" << std::endl;
    std::cout << "totalnya adalah " << Total << std::endl;

       if (Total < 100) {
        std::cout << "total kecil" << std::endl;
    } else if (Total >= 100 & Total <= 200) {
        std::cout << "total sedang" << std::endl;
    } else if (Total >= 200) {
        std::cout << "total besar" << std::endl;
    }
    return 0;
}

