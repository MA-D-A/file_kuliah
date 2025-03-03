#include <iostream>
#include <string>
int N = 0;
struct data_diri {
    std::string nim;
    std::string nama;
    std::string MatKul;
    int sks;
    std::string Huruf_mutu;
    float N_Ksm;
};
int main() {
    std::cout << "masukan N ";
    std::cin >> N;

    data_diri mahasiswa[N];
    if (N > 0) {
        for (int i = 0; i < N; i++) {
            std::cout << "masukana nim ";
            std::cin >> mahasiswa[i].nim;
            std::cout << "masukana nama ";
            std::cin.ignore();
            std::getline(std::cin, mahasiswa[i].nama);
            std::cout << "masukana Matkul ";
            std::cin >> mahasiswa[i].MatKul;
            std::cout << "masukana sks ";
            std::cin >> mahasiswa[i].sks;
            std::cout << "masukana huruf mutu ";
            std::cin >> mahasiswa[i].Huruf_mutu;

            std::cout << " " << std::endl;
            std::cout << "nim" << "|" << "nama" << "|" << "matkul" << "|"
                      << "sks"
                      << "|" << "huruf mutu" << "|" << "Nilai KSM" << std::endl;
        }
        for (int j = 0; j < N; j++) {

            if (mahasiswa[j].Huruf_mutu == "a") {
                mahasiswa[j].N_Ksm = 4;
            } else if (mahasiswa[j].Huruf_mutu == "ab") {
                mahasiswa[j].N_Ksm = 3.5;
            } else if (mahasiswa[j].Huruf_mutu == "b") {
                mahasiswa[j].N_Ksm = 3;
            } else if (mahasiswa[j].Huruf_mutu == "bc") {
                mahasiswa[j].N_Ksm = 2.5;
            } else if (mahasiswa[j].Huruf_mutu == "c") {
                mahasiswa[j].N_Ksm = 2;
            } else if (mahasiswa[j].Huruf_mutu == "d") {
                mahasiswa[j].N_Ksm = 1;
            } else if (mahasiswa[j].Huruf_mutu == "e") {
                mahasiswa[j].N_Ksm = 0;
            } else {
                std::cout << "input salah";
                break;
            }
            std::cout << mahasiswa[j].nim << "|" << mahasiswa[j].nama << "|"
                      << mahasiswa[j].MatKul << "|" << mahasiswa[j].sks << "|"
                      << mahasiswa[j].Huruf_mutu << "|" << mahasiswa[j].N_Ksm
                      << std::endl;
        }
    } else {
        std::cout << "salah input";
    }
}
