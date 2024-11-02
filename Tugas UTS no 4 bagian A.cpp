#include <iostream>
#include <cmath> // untuk fungsi pow

int main() {
    double A, B, C;

    // Meminta pengguna untuk memasukkan nilai A, B, dan C
    std::cout << "Masukkan nilai A: ";
    std::cin >> A;
    std::cout << "Masukkan nilai B: ";
    std::cin >> B;
    std::cout << "Masukkan nilai C: ";
    std::cin >> C;

    // Menghitung A^2 + B^2 + C^3
    double hasil = pow(A, 2) + pow(B, 2) + pow(C, 3);

    // Menampilkan hasilnya
    std::cout << "Hasil dari A^2 + B^2 + C^3 adalah: " << hasil << std::endl;

    return 0;
}
