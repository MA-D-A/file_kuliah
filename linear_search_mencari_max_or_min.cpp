#include <iostream>
using namespace std;
int main() {
    int arr[10] = {37, 21, 34, 39, 11, 21, 13, 12, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            min = arr[0];
            max = arr[0];
        } else if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Nilai maksimum: " << max << endl;
    cout << "Nilai minimum: " << min << endl;
    return 0;
}