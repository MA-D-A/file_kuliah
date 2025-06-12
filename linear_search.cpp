#include <iostream>
using namespace std;
int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[6] = {30, 20, 10, 60, 50, 40};
    int target = 40;
    int n = sizeof(arr) / sizeof(arr[0]);
    int hasil = linear_search(arr, n, target);
    (hasil == -1)
        ? cout << "Data tidak ditemukan"
        : cout << "Hasil pencarian ada pada index arary ke: " << hasil << endl;
    return 0;
}