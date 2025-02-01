#include<iostream>

using namespace std;

int nCr(int n, int r){

    if(n==1 || n==0) return 1;

    if(r==0 || r==n) return 1;

    return nCr(n-1, r-1) + nCr(n-1, r);
}

    int main(){

    int n, r;

    cout<<"n = ";
    cin>>n;
    cout<<"r = ";
    cin>>r;

    cout<<nCr(n, r);

    return 0;
}