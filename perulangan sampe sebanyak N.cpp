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
    return 0;
}

