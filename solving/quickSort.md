# quick sort
```cpp
#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high){

    int pivot = low;

    int  i=low, j=high;

    do{

        do{i++;}while(arr[i] <= arr[pivot]);

        do{j--;}while(arr[j] > arr[pivot]);

        if(i<j) swap(arr[i], arr[j]);
    
    }while(i<j);

    swap(arr[j], arr[pivot]);
    
    return j;
}

void quickSort(int arr[], int low, int high){

    if(low < high){
        
        int j = partition(arr, low, high);

        quickSort(arr, low, j);

        quickSort(arr, j+1, high);
    }
}
int main(){

    int arr[] = {1,2,5,2,435,2,456,7,3445,6,2,34,543,454,32};

    quickSort(arr, 0, 15);

    for(int i : arr) cout<<i<<" ";

    return 0;
}
```