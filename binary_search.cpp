#include <iostream>
using namespace std;
int tengah;
int arr[6] = {10, 20, 30, 40, 50, 60};
int n = sizeof(arr) / sizeof(arr[0]);
int awal = 0;
int akhir = n - 1;
int target = 60;

int binary_search(int arr[], int awal, int akhir, int target) {

    if (awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == target) {
            return tengah;
        }
        if (arr[tengah] < target) {
            awal = tengah + 1;
            return binary_search(arr, awal, akhir, target);

        } else {
            akhir = tengah - 1;
            return binary_search(arr, awal, akhir, target);
        }
    }
    return -1;
}
int main() {

    int result = binary_search(arr, awal, akhir, target);
    (result == -1) ? cout << "Data tidak ditemukan"
                   : cout << "mencari nilai 60 pada array" << endl;
    cout << "Hasil pencarian ada pada index array ke: " << tengah << endl;
}