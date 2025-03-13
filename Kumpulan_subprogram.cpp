#include <iostream>
void Tukar(int a, int b, int temp) {

    temp = a;
    a = b;
    b = temp;
    std::cout << a << " " << b << "\n";
}
int pangkatH(int b, int a) {
    int hasil = 1;
    for (int i = 0; i < b; i++) {
        hasil *= a;
    }
    return hasil;
}
void Balik(int n[5]) {
    std::cout << "\n";
    for (int i = 4; i >= 0; i--) {
        std::cout << n[i] << "\n";
    }
}
int main() {
    int a, b;

    std ::cout << "masukan nilai a dan b : ";
    std::cin >> a >> b;
    int temp = a;
    Tukar(a, b, temp);

    int hasil = pangkatH(b, a);
    std::cout << "hasil a pangkat b adalah " << hasil << "\n";
    std::cout << "masukan list angka ";
    int n[5];
    for (int i = 0; i < 5; i++) {
        std::cin >> n[i];
    }
    Balik(n);
}
