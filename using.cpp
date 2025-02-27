#include<iostream>

using namespace std;

void merge(int *a, int low,int high,int mid){
    int b[high-low+1];
    int k=0;
    int i=0,j=mid+1;
    while(i<=mid && j<=high){

        if(a[i]>a[j]) b[k++]=a[j++];
        
        else b[k++] = a[i++];
    }
    while(i<=mid) b[k++]=a[i++];
    while(j<=high) b[k++]=a[j++];
    
    for(int l=low, p=0; l<=high; l++, p++){
        cout<<b[p]<<" ";

         a[l] = b[p];}
        cout<<"\n";
}

void divid(int *a,int low,int high){
    if(low<high){
        int mid;
        mid=(low+high)/2;
        divid(a,low,mid);
        divid(a,mid+1,high);
        merge(a,low,high,mid);
    }
}
int main(){
    int a[]={1,8,54,4,-1,5,789,828};
    int high=7;
    int low=0;
    divid(a,low,high);
    for(int i : a) cout<<i<<" ";
}