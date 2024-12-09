#include <iostream>
using namespace std;

int main() {
    // Inisialisasi array dengan elemen 
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7; 

    // Menampilkan array sebelum dibalik
    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Membalik urutan elemen dalam array menggunakan teknik swap
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);
    }

    // Menampilkan array setelah dibalik
    cout << "Array setelah dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

