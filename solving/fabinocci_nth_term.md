# nth Fabinocci term
```c++
#include<iostream>

using namespace std;

int fabinocci(int term){

    if(term == 1) return 0;

    else if(term == 2) return 1;

    return fabinocci(term-1) + fabinocci(term -2);
}

    int main(){
    
    int terms;
    cout<<"no of terms :";
    cin>>terms;

    cout<<terms<<"th fabinocci term = "<<fabinocci(terms);
    return 0;
}
```