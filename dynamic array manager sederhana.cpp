#include <iostream>
void pushBack(int *&arr, int &kapasitas, int &nilai) {
    int *newarr = new int[kapasitas + 1];
    for (int i = 0; i < kapasitas; i++) {
        newarr[i] = arr[i];
    }
    newarr[kapasitas] = nilai;
    delete[] arr;
    arr = newarr;
    kapasitas++;
}
int main() {
    bool jalan = true;
    do {
        int kapasitas;
        std::cout << "masukan kapasitas  array ";
        std::cin >> kapasitas;
        int *arr = new int[kapasitas];
        for (int i = 0; i < kapasitas; i++) {
            std::cout << "masukan  nilai array  ke " << i + 1 << " ";
            std::cin >> arr[i];
        }
        std::cout << "" << std::endl;
        int nilai;
        int opsi;
        std::cout << "apakah ingin menambah kan nilai array ?";
        std::cout << "1. ya" << std::endl;
        std::cout << "2.tidak" << std::endl;
        std::cin >> opsi;
        if (opsi == 1) {
            std::cout << "masukan nilai  baru ";
            std::cin >> nilai;
            pushBack(arr, kapasitas, nilai);
        }
        for (int i = 0; i < kapasitas; i++) {
            std::cout << arr[i] << ",";
        }
        std::cout << " " << std::endl;

        delete[] arr;
        arr = nullptr;
        char y_n;
        std::cout << "jalankan program lagi ? y/n";
        std::cin >> y_n;
        jalan = (y_n == 'y') ? true : false;
    } while (jalan == true);
}