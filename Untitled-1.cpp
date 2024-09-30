#include <iostream>
using namespace std;

int main() {
    int m = 24;
    int k = 21;
    int j;

    // a. j = m | k
    j = m | k;
    cout << "a. j = m | k: " << j << endl; // Bitwise OR

    // b. j = m % k
    j = m % k;
    cout << "b. j = m % k: " << j << endl; // Modulus

    // c. j = m & k
    j = m & k;
    cout << "c. j = m & k: " << j << endl; // Bitwise AND

    // d. j = m + ++k
    j = m + ++k;
    cout << "d. j = m + ++k: " << j << endl; // Pre-increment

    // e. j = m - --k
    j = m - --k;
    cout << "e. j = m - --k: " << j << endl; // Pre-decrement

    // f. j = m - --k (again)
    j = m - --k;
    cout << "f. j = m - --k: " << j << endl; // Pre-decrement (again)

    // g. j = m >> 2
    j = m >> 2;
    cout << "g. j = m >> 2: " << j << endl; // Right shift

    // h. j = k += m
    j = k += m;
    cout << "h. j = k += m: " << j << endl; // Add and assign

    // i. j = --m + k++
    j = --m + k++;
    cout << "i. j = --m + k++: " << j << endl; // Pre-decrement and post-increment

    // j. j = --m * 5
    j = --m * 5;
    cout << "j. j = --m * 5: " << j << endl; // Pre-decrement and multiply

    return 0;
}