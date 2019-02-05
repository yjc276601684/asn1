#include <iostream>
#include <cstdlib>

using namespace std;
/*merge sort method*/
/*merge two sorted array*/
/*First array is array[low..mid]*/
/*Second array is array[mid+1...high]*/
void Merge(int array[], int low, int mid, int high){
     	int ArrayTemp[mid - low + 1];
        int i = low;
	int j = mid + 1;
	int k = 0;
	
	while(i <= mid && j <= high){
		if(array[i] <= array[j]){
			ArrayTemp[k++] = array[i++];
		}
		else{
			ArrayTemp[k++] = array[j++];
		}
	}
	while (i <= mid){
	        ArrayTemp[k++] = array[i++];
       	}
	while (j < high){
		ArrayTemp[k++] = array[j++];
	}
	for (k = 0, i = low; i <= high; ++i, ++k){
	       array[i] = ArrayTemp[k];
	}
	//delete ArrayTemp;
}

void mergeSort(int array[], int low, int high){
	if( low < high){
		int mid = low + (high - low)/2;
		mergeSort(array, low, mid);
		mergeSort(array, mid + 1, high);

		Merge(array, low, mid, high);
	}
}

int main(){
        cout << "Enter the size of the array to sort: " << "\n";
        int length ;
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
	int low = 0;
        cout << "After sort: " << "\n";
        mergeSort(arr,low,length);
        /*return result after sort*/
        for(int a = 0; a< 20; a++){
                cout << arr[a];
                cout << "\n";
        }

}

