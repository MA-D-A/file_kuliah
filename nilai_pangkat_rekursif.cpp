#include <iostream>

int nic_pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * nic_pangkat(a, b - 1);
    }
}
int main() {
    int a, b;
    std::cout << "masukan a dan b : ";
    std::cin >> a >> b;
    int hasil = nic_pangkat(a, b);
    std::cout << "hasil pangkat : " << hasil;
}