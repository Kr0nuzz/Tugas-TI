#include <iostream>
#include <cmath> // untuk fungsi pow

int main() {
    double A, C;

    // Meminta pengguna untuk memasukkan nilai A dan C
    std::cout << "Masukkan nilai A: ";
    std::cin >> A;
    std::cout << "Masukkan nilai C: ";
    std::cin >> C;

    // Menghitung A/2 + C^2
    double hasil = (A / 2) + pow(C, 2);

    // Menampilkan hasilnya
    std::cout << "Hasil dari A/2 + C^2 adalah: " << hasil << std::endl;

    return 0;
}
