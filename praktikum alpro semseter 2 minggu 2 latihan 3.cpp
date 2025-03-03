#include <iostream>
using namespace std;

int main() {
    int sizeA, sizeB;

    // Input ukuran array kelas A
    cout << "Masukkan jumlah nilai kelas A: ";
    cin >> sizeA;

    // Deklarasi array kelas A
    int kelasA[sizeA];

    // Input nilai-nilai kelas A
    cout << "Masukkan nilai kelas A:" << endl;
    for (int i = 0; i < sizeA; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> kelasA[i];
    }

    // Input ukuran array kelas B
    cout << "Masukkan jumlah nilai kelas B: ";
    cin >> sizeB;

    // Deklarasi array kelas B
    int kelasB[sizeB];

    // Input nilai-nilai kelas B
    cout << "Masukkan nilai kelas B:" << endl;
    for (int i = 0; i < sizeB; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> kelasB[i];
    }

    // Deklarasi array gabungan
    int arrayGabungan[sizeA + sizeB];

    // Menggabungkan nilai dari kelas A dan kelas B ke dalam arrayGabungan
    for (int i = 0; i < sizeA; i++) {
        arrayGabungan[i] = kelasA[i];
    }
    for (int i = 0; i < sizeB; i++) {
        arrayGabungan[sizeA + i] = kelasB[i];
    }

    // Menampilkan array gabungan
    cout << "Array Gabungan:" << endl;
    for (int i = 0; i < sizeA + sizeB; i++) {
        cout << arrayGabungan[i] << " ";
    }
    cout << endl;

    // Menghitung jumlah total nilai dalam arrayGabungan
    int total = 0;
    for (int i = 0; i < sizeA + sizeB; i++) {
        total += arrayGabungan[i];
    }

    // Menghitung rata-rata nilai
    double rataRata = static_cast<double>(total) / (sizeA + sizeB);

    // Menampilkan jumlah total nilai dan rata-rata
    cout << "Jumlah Total Nilai: " << total << endl;
    cout << "Rata-rata: " << rataRata << endl;

    return 0;
}