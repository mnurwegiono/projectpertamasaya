#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }

    reverseArray(arr, n);

    cout << "\nArray setelah dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }

    return 0;
}
