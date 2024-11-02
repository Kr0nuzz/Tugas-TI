#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, max;

    // Meminta input empat bilangan bulat
    cout << "Masukkan empat bilangan bulat:\n";
    cout << "Bilangan pertama: ";
    cin >> a;
    cout << "Bilangan kedua: ";
    cin >> b;
    cout << "Bilangan ketiga: ";
    cin >> c;
    cout << "Bilangan keempat: ";
    cin >> d;

    // Menentukan bilangan terbesar
    max = a; // Anggap bilangan pertama adalah yang terbesar

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    // Mencetak bilangan terbesar
    cout << "Bilangan terbesar adalah: " << max << endl;

    return 0;
}
