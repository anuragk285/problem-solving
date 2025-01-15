# Validity of Credit Card
```cpp
#include<iostream>

int main(){

    long cnum;

    std::cout<<"Enter credit card number: ";
    std::cin>>cnum;

    int sum=0, temp;
    long ctemp = cnum;

    //even digit sum
    while(ctemp>0){

        ctemp = ctemp / 10;

        temp = 2 * (ctemp % 10);

        if(temp / 10 > 0){
            sum = sum + (temp % 10) + (temp/10)%10;

        }else sum = sum + temp;
        ctemp = ctemp / 10;

    }
  
    //odd digit sum
    ctemp = cnum;
    while(ctemp > 0){

        temp = (ctemp % 10);

        ctemp = ctemp / 100;

        sum = sum + temp;

    }
    if(sum%10==0) std::cout<<"your credit card is valid";
    else std::cout<<"Your credit card is invalid";

    return 0;
}
```