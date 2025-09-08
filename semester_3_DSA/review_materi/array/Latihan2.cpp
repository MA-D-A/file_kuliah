#include <iostream>

void Top_singko(int arr[], int size) {
    int arr_max[3] = {0, 0, 0};
    for (int i = 0; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int k = 0; k < 3; k++) {
        if (arr[k] != arr_max[0] && arr[k] != arr_max[1]) {
            arr_max[k] = arr[k];
        }
    }

    std::cout << "3 bilangan terbesar : " << std::endl;
    for (int x = 0; x < 3; x++) {
        std::cout << x + 1 << " " << arr_max[x] << std::endl;
    }
}

int main() {
    int arr_bil[20];
    for (int i = 0; i < 20; i++) {
        std::cout << "Masukkan elemen ke-" << (i + 1) << ": ";
        std::cin >> arr_bil[i];
    }
    Top_singko(arr_bil, 20);
    return 0;
}
