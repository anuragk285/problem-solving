# Sin value Calculator
```cpp
#include<iostream>
#include<cmath>

int factorial(int n){
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}
using namespace std;
    int main(){

    double x, sin_value=0;
    int  j=1;
    cout<<"Enter x : ";
    cin>>x;
    if(x > 360 || x< -360) x = (int)x % 360;
    x = x * (double)3.14/180;

    for(int i=1; i<10; i+=2){
        sin_value = sin_value + (j)* ((double)pow(x, i)/factorial(i));
        j = j * (-1);
    }

    printf("sin(%.2lf) = %.2lf", x, sin_value);
    return 0;
}
```