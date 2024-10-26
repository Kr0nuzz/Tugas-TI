#include <iostream>
using namespace std;

int main() {
    cout << "Angka Genap: ";
    for (int i = 1; i <= 35; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\nAngka Ganjil: ";
    for (int i = 1; i <= 35; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    return 0;
}
