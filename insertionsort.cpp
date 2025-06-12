#include <iostream>
int main() {
    int N = 5;
    int *arr = new int[N]{5, 2, 1, 4, 3};
    for (int i = 0; i < N; i++) {
        std::cout << arr[i];
        if (i != N - 1) {
            std::cout << ",";
        }
    }
    int temp;
    std::cout << " " << std::endl;
    for (int i = 1; i < N; i++) {
        int j = i - 1;
        temp = arr[i];
        int k = 0;
        while (j >= 0 && arr[j] > temp) {
            while (k < N) {
                std::cout << arr[k] << " || ";
                k++;
            }
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;

        std::cout << " " << std::endl;
    }

    for (int i = 0; i < N; i++) {
        std::cout << arr[i];
        if (i != N - 1) {
            std::cout << " || ";
        }
    }
    delete[] arr;
}