# e^x

```c++
#include<iostream>

using namespace std;

double e(int x, int n){

    int num=1, dem=1;

    double sum=1;

    for(int i=1; i<=n; i++){

        sum = sum + (double)(num*x)/(dem*i);

        num = num*x;
        dem = dem*i;
    }
    return sum;
}

    int main(){

    int x, terms;
    cout<<"x = ";
    cin>>x;
    cout<<"no of terms : ";
    cin>>terms; 
    cout<<"e^"<<x<<" = "<<e(x, terms);
    return 0;
}
```