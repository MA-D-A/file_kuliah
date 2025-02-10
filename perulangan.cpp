#include <iostream>
float N, x, N_Total, b, Rerata;
int main() {
    std::cout << "halo masbro,  jadi kali ini kita akan melakukan perulangan "
                 "dan menghitung rerata dari perulangan \n\n";
    std::cout << "masukan  nilai x sebagai nilai awal perulangan : ";
    std::cin >> x;
    std::cout << "masukan nilai N(nilai ini nanti akan dijumlahkan dengan x  "
                 "sehingga perulangan akan berakhir di x+N ) : ";
    std::cin >> N;
    for (int i = x; i <= (x + N); i++) {
        N_Total += i;
        std::cout << i << " ";
        b++;
    }
    std::cout << " " << std::endl;
    Rerata = N_Total / b;
    std::cout << "rerata dari perulangan tersebut adalah  " << Rerata;
}