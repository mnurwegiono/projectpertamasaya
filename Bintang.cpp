#include <iostream>
using namespace std;

int main (){
    int arr[]{1,2,3,4,5};
    cout << "Array setelah dibalik: [";
    
    for (int i=4;i>=0;i--){
        cout << arr[i];

        if (i > 0){
            cout << ",";
        }
    }
    cout << "]";
    return 0;
}
