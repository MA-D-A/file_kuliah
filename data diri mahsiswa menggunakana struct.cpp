#include <iostream>
#include <string>
int N = 0;
int j_mahasiswa = 0;
struct data_diri {
    std::string nim;
    std::string nama;
    std::string MatKul;
    int sks;
    char Huruf_mutu;
};
int main() {
    std::cout << "masukan jumalah mahasiswa";
    std::cin >> j_mahasiswa;
    std::cout << "masukan N ";
    std::cin >> N;

    data_diri mahasiswa[j_mahasiswa];
    for (int i = 0; i < j_mahasiswa; i++) {
        std::cout << "masukana nim ";
        std::cin >> mahasiswa[i].nim;
        std::cout << "masukan nama ";
        std::cin.ignore();
        std::getline(std::cin, mahasiswa[i].nama);
        std::cout << "masukan Matkul ";
        std::cin >> mahasiswa[i].MatKul;
        std::cout << "masukan sks ";
        std::cin >> mahasiswa[i].sks;
        std::cout << "masukan huruf mutu ";
        std::cin >> mahasiswa[i].Huruf_mutu;
    }
    std::cout << " " << std::endl;
    std::cout << "nim" << "|" << "nama" << "|" << "matkul" << "|" << "sks"
              << "|" << "huruf mutu" << std::endl;
    for (int j = 0; j < N; j++) {
        std::cout << mahasiswa[j].nim << "|" << mahasiswa[j].nama << "|"
                  << mahasiswa[j].MatKul << "|" << mahasiswa[j].sks << "|"
                  << mahasiswa[j].Huruf_mutu << std::endl;
    }
}