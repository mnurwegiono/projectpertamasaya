#include <iostream>
using namespace std;

int main (){

    int arr[]{1,2,3,4,5};

    cout << "Array setelah dibalik: [";
    
    for (int i=4;i>=1;i--){
        cout << arr[i]<<",";
    }

    cout << arr[0];
    cout << "]";


    return 0;
}