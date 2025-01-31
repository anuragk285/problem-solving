# e^x

```c++
#include<iostream>

using namespace std;

int power(int base, int exponent){

    if(exponent == 0) return 1;

    else if(exponent % 2 ==0) return power(base*base, exponent/2);

    else return base*power(base*base, (exponent-1)/2);
}

int factorial(int n){

    if(n<=1) return 1;

    return n*factorial(n-1);
}

double e(int x, int n){

    if(n==0) return 1;

    return e(x, n-1) + (double)power(x, n)/factorial(n);
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