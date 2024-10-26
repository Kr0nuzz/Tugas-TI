#include <iostream>
using namespace std;

int main() {
    int i = 1;

    cout << "Angka Genap: ";
    while (i <= 35) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }

    i = 1; // reset nilai i untuk loop berikutnya
    cout << "\nAngka Ganjil: ";
    while (i <= 35) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}
