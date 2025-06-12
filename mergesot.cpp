#include <iostream>
using namespace std;

void merge(int arr[], int awal, int mid, int akhir) {
    int n1 = mid - awal + 1;
    int n2 = akhir - mid;
    int arr_kanan[n1];
    int arr_kiri[n2];
    for (int i = 0; i < n1; i++) {
        arr_kanan[i] = arr[awal + i];
    }
    for (int j = 0; j < n2; j++) {
        arr_kiri[j] = arr[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = awal;
    while (i < n1 && j < n2) {
        if (arr_kanan[i] <= arr_kiri[j]) {
            arr[k] = arr_kanan[i];
            i++;
        } else {
            arr[k] = arr_kiri[j];
            j++;
        }
        k++;
    }
    while (n1 > i) {
        arr[k] = arr_kanan[i];
        i++;
        k++;
    }
    while (n2 > j) {
        arr[k] = arr_kiri[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int awal, int akhir) {
    if (awal >= akhir) {
        return;
    } else {
        int mid = awal + (akhir - awal) / 2;

        mergeSort(arr, awal, mid);
        mergeSort(arr, mid + 1, akhir);

        merge(arr, awal, mid, akhir);
    }
}

int main() {
    int n = 5;
    int arr[n] = {21, 12, 32, 11, 10};

    mergeSort(arr, 0, n - 1);

    cout << "array yang tersortir:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}