# All Trigonometric Operation
```cpp
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;\
int factorial(int n){
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}
double sin(double x){
    double sin_value=0;
    int  j=1;
    if(x > 360 || x < -360) x = (int)x % 360;
    x = x * (double)3.14/180;

    for(int i=1; i<10; i+=2){
        sin_value = sin_value + (j)* ((double)pow(x, i)/factorial(i));
        j = j * (-1);
    }
    return sin_value;
}

double cos(double x){

    int j=-1;
    double cos_value=1;
    if(x > 360 || x < -360) x = (int)x % 360;
    x = x * (double)3.14/180;
    for(int i=2; i<=10; i+=2){

        cos_value = cos_value + (j)*((double)pow(x, i)/factorial(i));
        j= j*(-1);
    }
    return cos_value;
}

    int main(){

    string function;
    double x;
    cout<<"value for ";
    cin>>function;
    cin>>x;

    if(function == "sin"){
        
        cout<<"sin("<<x<<") = "<<fixed<<setprecision(2)<<sin(x);
    
    }else if(function == "cos"){
        
        cout<<"cos("<<x<<") = "<<fixed<<setprecision(2)<<cos(x);
    }else if(function == "tan"){

        cout<<"tan("<<x<<") = "<<fixed<<setprecision(2)<<(double)sin(x)/cos(x);
    }else if(function == "cot"){

        cout<<"cot("<<x<<") = "<<fixed<<setprecision(2)<<(double)cos(x)/sin(x);
    }else if(function == "sec"){

        cout<<"sec("<<x<<") = "<<fixed<<setprecision(2)<<(double)1/cos(x);
    }else if(function == "cosec"){

        cout<<"cosec("<<x<<") = "<<fixed<<setprecision(2)<<(double)1/sin(x);
    }
    
   
    return 0;
}
```