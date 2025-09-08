#include <iostream>
using namespace std;
int main() {
    int i;
    int tinggi[5];
    for (i = 0; i < 5; i++) {
        cout << "Data index ke-" << i << " = ";
        cin >> tinggi[i];
    }
    cout << endl << "Data tinggi badan " << endl;
    for (i = 0; i < 5; i++) {
        cout << "Data index ke-" << i << " = ";
        cout << tinggi[i] << endl;
    }
}