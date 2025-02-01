# tower of hanoi upto N disk(s)

```c++
#include<iostream>

using namespace std;

void TOH(int n, int A, int B, int C){

    if(n>0){

        TOH(n-1, A, C, B);

        cout<<"move "<<A<<" to "<<C<<endl;

        TOH(n-1, B, A, C);
    }
}
int main(){

    int n;
    cout<<"n = ";
    cin>>n;
    TOH(n, 1, 2, 3);

    return 0;
}
```
