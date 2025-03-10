#include <iostream>
int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < 10; i++) {
        if (a[i] == 10) {
            std::cout << "bilangan sepuluh\n";
        } else {
            std::cout << "bilangan bukan sepuluh\n";
        }
    }
}