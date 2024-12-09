#include <iostream>
using namespace std;

int main() {
    int angka[7] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 7 / 2; i++) {
        swap(angka[i], angka[6 - i]);
    }

    for (int i = 0; i < 7; i++) {
        cout << angka[i] << " ";
    }

    return 0;
}
