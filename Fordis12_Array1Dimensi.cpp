#include <iostream>
using namespace std;

int main() {
    // Mendefinisikan array satu dimensi dengan 10 elemen
    int data_array[10] = {80, 76, 87, 10, 67, 90, 77, 54, 9, 32};

    // Menampilkan elemen-elemen di dalam array
    cout << "Isi dari array satu dimensi adalah:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Elemen ke-" << i + 1 << ": " << data_array[i] << endl;
    }

    return 0;
}
