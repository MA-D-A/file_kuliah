#include <iostream>

int ngapaya(int a) {
    if (a == 0) {
        return a;
    } else {
        return a + ngapaya(a - 1);
    }
}
int main() {
    int a;
    std::cout << "masukan a  : ";
    std::cin >> a;
    int hasil = ngapaya(a);
    std::cout << "hasil deret : " << hasil;
}