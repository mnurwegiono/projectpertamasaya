#include <iostream>
using namespace std;

int main (){
	
	const int JUMLAH_ARRAY = 5;
	int arr[5]{1,2,3,4,5};
	
	for (int i=0;i<2;i++){
		
		int sementara = arr[i];
		arr[i] = arr[JUMLAH_ARRAY - 1 - i];
		arr[JUMLAH_ARRAY - 1 - i] = sementara;
		
	}
	
	cout << "Contoh hasil output: [";
	
	for (int i = 0; i < 5; i ++){
		
		cout << arr[i];
		if (i != 4){
			cout << ",";
		}
	}
	
	cout << "]";
	
	return 0;
}