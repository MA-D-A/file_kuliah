#include <iostream>

int main() {
    int N = 9;
    int *arr = new int[N]{8, 1, 9, 2, 7, 3, 6, 4, 5};
    for (int i = 0; i < N; i++) {
        std::cout << arr[i];
        if (i != N - 1) {
            std::cout << ",";
        }
    }
    std::cout << " " << std::endl;
    int temp;
    for (int k = 0; k < N; k++) {
        std::cout << arr[k] << " || ";
    }
    std::cout << "\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                for (int k = 0; k < N; k++) {
                    std::cout << arr[k] << " || ";
                }
                std::cout << "\n";
            }
        }
    }
    for (int i = 0; i < N; i++) {
        std::cout << arr[i];
        if (i != N - 1) {
            std::cout << ",";
        }
    }
    delete[] arr;
}