# Pascals triangle
```c
#include<stdio.h>

    int main(){

    // pascals triangle

    int n;
    printf("no of lines :");
    scanf("%d", &n);

    int arr[n][n];

    for(int line=0; line<n; line++){

        for(int i=0; i<=line; i++){

            if(i==0 || i==line) arr[line][i] =1;

            else {

                arr[line][i] = arr[line-1][i-1] + arr[line-1][i];
            }
        }
    }

    for(int k=0; k<n; k++){

        for(int spaces =0; spaces<(n-k); spaces++) printf(" ");

        for(int i=0; i<=k; i++) printf("%d ", arr[k][i]);

        printf("\n");
    }
    return 0;
}
```