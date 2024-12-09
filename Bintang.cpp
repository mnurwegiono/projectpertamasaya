#include <iostream>
using namespace std;

int main (){

    int arr[]{1,2,3,4,5};

    cout << "Array setelah dibalik: [";
    
    for (int i=4;i>=0;i--){
        
        if (i>0){
            cout << arr[i] << ",";
        } else {cout << arr[i] << "]";}

    }

    return 0;
}
