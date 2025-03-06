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
    if (N > 0) {
        data_diri mahasiswa[N];
        for (int i = 0; i < N; i++) {
            std::cout << "masukan nim ";
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
                  << "|" << "huruf mutu" << "|" << "Nilai KSM" << std::endl;

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
        std::string N_Dicari;
        std::cout << "masukan nim yang dicari ";
        std::cin >> N_Dicari;
        char dapat = 'x';
        for (int i = 0; i < N; i++) {

            if (N_Dicari == mahasiswa[i].nim) {
                std::cout << "mahasiswa dengan Nim " << mahasiswa[i].nim
                          << " tersimpan di dalam data ";

                dapat = 'y';
                break;
            }
        }

        if (dapat != 'y') {
            std::cout << "mahasiswa dengan Nim " << N_Dicari
                      << " tak tersimpan di dalam data ";
        }
        float total = 0;
        float jumlah = 0;
        for (int j = 0; j < N; j++) {

            if (N_Dicari == mahasiswa[j].nim) {
                total += mahasiswa[j].N_Ksm;
                jumlah++;
            }
        }
        if (dapat == 'y') {
            float NR = total / jumlah;
            std::cout << " Dengan NR " << NR;
        }

    } else {
        std::cout << "salah input";
    }
}
