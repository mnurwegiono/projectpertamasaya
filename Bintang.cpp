#include <iostream>
using namespace std;

int main (){
    int arr[]{1,2,3,4,5};
    cout << "Array setelah dibalik: [";
    #include <iostream>
using namespace std;

int main (){

    const int JUMLAH_ELEMENT{5};
    int arr[]{1,2,3,4,5};

    int simpan_value;

    // menukar posisi indeks 0 dengan 4, dan 1 dengan 3;
    for (int i = 0; i < JUMLAH_ELEMENT/2 ; i++){

        simpan_value = arr[i]; 
        arr[i] = arr [JUMLAH_ELEMENT-i-1]; 
        arr [JUMLAH_ELEMENT-i-1] = simpan_value;

    }

    // menampilkan array
    cout << "Array setelah dibalik: [";

    for (int i=0;i<5;i++){

        cout << arr[i];
        if (i != 4){
            cout << ",";
        } else {
            cout << "]";
        }

    }

    return 0;

}
    for (int i=4;i>=0;i--){
        cout << arr[i];

        if (i > 0){
            cout << ",";
        }
    }
    cout << "]";
    return 0;
}
