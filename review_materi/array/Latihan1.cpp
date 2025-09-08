#include <iostream>

float average(float arr[], float size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    float arr_bil[20];
    for (int i = 0; i < 20; i++) {
        std::cout << "Masukkan elemen ke-" << (i + 1) << ": ";
        std::cin >> arr_bil[i];
    }
    float avg = average(arr_bil, 20);
    std::cout << "Rerata: " << avg << std::endl;
    return 0;
}
