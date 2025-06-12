#include <iostream>
int main() {
    int N = 9;
    int *arr = new int[N]{9, 1, 8, 2, 7, 3, 6, 4, 5};
    for (int i = 0; i < N; i++) {
        std::cout << arr[i];
        if (i != N - 1) {
            std::cout << ",";
        }
    }

    std::cout << " " << std::endl;
    for (int i = 0; i < N; i++) {
        int min = i;
        for (int j = i; j < N; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (int i = 0; i < N; i++) {
        std::cout << arr[i];
        if (i != N - 1) {
            std::cout << ",";
        }
    }
    delete[] arr;
}