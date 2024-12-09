#include <iostream>

using namespace std;

void balikArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        // Tukar elemen pada indeks i dengan indeks n-i-1
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main() {
    int angka[] = {1, 2, 3, 4, 5};
    int n = sizeof(angka) / sizeof(angka[0]);

    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << angka[i] << " ";
    }

    balikArray(angka, n);

    cout << "\nArray setelah dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << angka[i] << " ";
    }

    return 0;
}
