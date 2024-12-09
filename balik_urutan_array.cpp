#include <iostream>
using namespace std;

void balikArray(int arr[], int ukuran) {
    for (int i = 0, j = ukuran - 1; i < j; i++, j--)
        swap(arr[i], arr[j]);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int ukuran = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Sebelum: ";
    for (int i = 0; i < ukuran; i++) 
        cout << arr[i] << " ";
    cout << "\nSetelah: ";
    
    balikArray(arr, ukuran);
    
    for (int i = 0; i < ukuran; i++) 
        cout << arr[i] << " ";
    
    return 0;
}