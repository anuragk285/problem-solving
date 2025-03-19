#include<iostream>
using namespace std;
void merge(int *arr,int low,int high,int mid){

    int b[high-low+1],k=0,i=low,j=mid+1;

    while(i<=mid && j<=high){

        if(arr[i]<arr[j])b[k++]=arr[i++];

        if(arr[i]>arr[j])b[k++]=arr[j++];
    }
    while(arr[i]<=mid) b[k++]=arr[i++];

    while(arr[j]<=high) b[k++]=arr[j++];

    int p =low;
    
    for(int l=0, p=low; p<=high; p++, l++) arr[p] = b[l];
    
}
void remerge(int *arr,int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        remerge(arr,low,mid);
        remerge(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}
int main(){
    cout<<"enter the size of array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    int low=0,high=n-1;
    remerge(arr,low,high);
    for(int i=0;i<n;i++){
       cout<<arr[i]<<endl;
    }
    return 0;
}