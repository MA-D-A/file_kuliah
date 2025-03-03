#include <iostream>
using namespace std;
int main() {
    int N;

    cout << "masukan N ";
    cin >> N;
    int nilaiSiswa[N];
    for (int i = 0; i < N; i++) {
        cout << "masukan nilai siswa ke " << i + 1;
        cin >> nilaiSiswa[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (nilaiSiswa[i] == nilaiSiswa[j]) {
                cout << "terdapat siswa dengan nilai yang sama\n";
                cout << "Siswa dengan nilai " << nilaiSiswa[i]
                     << " mendapatkan nilai yang sama." << endl;
            }
        }
    }
}