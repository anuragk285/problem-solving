# Gcd of 2 numbers
```c
#include<stdio.h>

    int main(){

    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a, &b);

    int k;
    if(a<b) k=a;
    if(b<a) k=b;

    while(a%k!=0 || b%k!=0) k--;

    printf("Gcd of %d and %d is %d", a, b, k);
    return 0;
}
```