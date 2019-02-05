#include <iostream>
#include <cstdlib>

using namespace std;
/*insertion sort method*/
void insertionSort(int array[], int size){
	for(int i = 1; i < size; i++){
	       for(int j = i; j > 0 && array[j-1] > array[j]; j--){
		       int temp = array[j];
		       array[j] = array[j-1];
		       array[j-1] = temp;
     	       
	       }
     
	}
}

int main(){
	cout << "Enter the size of array to sort: " << "\n";
	int length;
        cin >> length;	
	/*create the array with given length*/
       	int arr[length];
	int Num = length; 
	for (int i = 0; i < length; i++){
		arr[i] = Num;
		Num--;
	}
	cout << "Befort sort: " << "\n";
	/*return result before sort*/
	for(int i = 0; i<20;i++){
		cout << arr[i];
		cout << "\n";
	}
	cout << "After sort: " << "\n";
	insertionSort(arr,length);
        /*return result after sort*/
	for(int a = 0; a< 20; a++){
	        cout << arr[a];
		cout << "\n";
	}
	
}	
