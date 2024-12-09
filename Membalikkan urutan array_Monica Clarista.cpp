#include <iostream>
using namespace std;

int main() {
	int arr[] = {1,2,3,4,5};
	int n = 5;

    cout << "Array sebelum dibalik:\n";
    for (int i = 0; i < n ; i++) {
    	cout << arr[i] <<" ";

    }

    for (int i = 0; i < n / 2; i++) {
    	swap (arr[i], arr [n - 1 - i]); 
	}
    
	cout << "\nArray setelah dibalik:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
