#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Membalik urutan elemen array
    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Menampilkan array setelah dibalik
    cout << "Array setelah dibalik: [";
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
