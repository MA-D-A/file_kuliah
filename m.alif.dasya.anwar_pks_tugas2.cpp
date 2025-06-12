// m alif dasya anwar
// NIM 124140133
#include <iostream>
using namespace std;
int main() { // dekalrasi variabel
    int v, w, x, y, z;
    int operasi;
    cout << "masukan 5 bilangan bulat: ";
    cin >> v >> w >> x >> y >> z;
    // memilih operasi
    cout << " pilih operasi yang akan dilakukan  program ini\n";
    cout << "Angka 1 : Penjumlahan\n";
    cout << "Angka 2 : Pengurangan\n";
    cout << "Angka 3 : Perkalian\n";
    cout << "Angka 4 : Pembagian\n";
    cout << "masukan operasi: ";
    cin >> operasi;
    int genap = 0;
    int ganjil = 0;
    // menghitung jumlah genap
    if (v % 2 == 0) {
        genap++;
    }
    if (w % 2 == 0) {
        genap++;
    }
    if (x % 2 == 0) {
        genap++;
    }
    if (y % 2 == 0) {
        genap++;
    }
    if (z % 2 == 0) {
        genap++;
    }
    // menghitung jumlah ganjil
    if (v % 2 != 0) {
        ganjil++;
    }
    if (w % 2 != 0) {
        ganjil++;
    }
    if (x % 2 != 0) {
        ganjil++;
    }
    if (y % 2 != 0) {
        ganjil++;
    }
    if (z % 2 != 0) {
        ganjil++;
    }
    int maksimal = x;
    int minimal = z;
    // mengecek  nilai maksimal
    if (v > maksimal) {
        maksimal = v;
    }
    if (y > maksimal) {
        maksimal = y;
    }
    if (w > maksimal) {
        maksimal = w;
    }
    if (z > maksimal) {
        maksimal = z;
    }

    // mengecek nilai minimal
    if (v < minimal) {
        minimal = v;
    }
    if (y < minimal) {
        minimal = y;
    }
    if (w < minimal) {
        minimal = w;
    }
    if (z < minimal) {
        minimal = z;
    }

    switch (operasi) {

    case 1:
        cout << "hasil pejumlahan dari kelima angka tersebut adalah ";
        cout << v + w + x + y + z << endl;
        cout << "nilai maksimal:" << maksimal << endl;
        cout << "nilai minimal:" << minimal << endl;
        cout << "jumlah bilangan ganjil:" << ganjil << endl;
        cout << "jumlah bilangan genap:" << genap << endl;
        break;
    case 2:
        cout << "hasil pengurangan dari kelima angka tersebut adalah ";
        cout << v - w - x - y - z << endl;
        cout << "nilai maksimal:" << maksimal << endl;
        cout << "nilai minimal:" << minimal << endl;
        cout << "jumlah bilangan ganjil:" << ganjil << endl;
        cout << "jumlah bilangan genap:" << genap << endl;
        break;
    case 3:
        cout << "hasil perakalian dari kelima angka tersebut adalah ";
        cout << v * w * x * y * z;
        cout << "nilai maksimal:" << maksimal << endl;
        cout << "nilai minimal:" << minimal << endl;
        cout << "jumlah bilangan ganjil:" << ganjil << endl;
        cout << "jumlah bilangan genap:" << genap << endl;
        break;
    case 4:
        cout << "hasil pembagian dari kelima angka tersebut adalah ";
        cout << v / w / x / y / z;
        cout << "nilai maksimal:" << maksimal << endl;
        cout << "nilai minimal:" << minimal << endl;
        cout << "jumlah bilangan ganjil:" << ganjil << endl;
        cout << "jumlah bilangan genap:" << genap << endl;
        break;
    }

    return 0;
}