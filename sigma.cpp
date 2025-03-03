#include <iostream>
#include <string>
int main() {
    std::string a, x, m, z;
    std::cout << "kata gen alpha anda (sigma/tidak): ";
    std::cin >> a;
    std::cout << "kata gen z anda (sigma/tidak): ";
    std::cin >> z;
    std::cout << "kata gen milenial anda (sigma/tidak): ";
    std::cin >> m;
    std::cout << "kata gen x anda  (sigma/tidak): ";
    std::cin >> x;
    if (a == "sigma") {
        std::cout
            << "kesimpulan : anda adalah orang paling sigma aura 1000++++++ 🥶";
    } else if (a == "tidak") {
        std::cout << "kesimpulan: anda tidak sigma 🤢";
    } else {
        std::cout << "ada kesalahan inputan";
    }
}