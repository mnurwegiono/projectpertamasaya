#include <iostream>
using namespace std;

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5; 

    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    
    cout << "Array setelah dibalik: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
