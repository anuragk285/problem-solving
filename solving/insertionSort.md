# insertion sort

```cpp
#include<iostream>

using namespace std;

void insertionSort(int *arr, int size){

    for(int i=1; i<size; i++){

        int key = arr[i];

        int j = i-1;

        while(j>=0 && arr[j]>key){
            
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

    int main(){

    int arr[10];
    
    cout<<"Enter any 10 integers: ";

    for(int i=0; i<10; i++) cin>>arr[i];

    insertionSort(arr, 10);

    for(int i : arr) cout<<i<<" ";

    return 0;
}
```