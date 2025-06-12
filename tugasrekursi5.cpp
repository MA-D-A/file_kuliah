#include <iostream>

using namespace std;

int f(int n) {
    if (n == 0)
        return 2;
    if (n == 1 || n == 2 || n == 3)
        return 1;
    return f(n - 1) + f(n - 2) * f(n - 3);
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    cout << "f(" << n << ") = " << f(n) << endl;

    return 0;
}