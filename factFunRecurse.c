#include<stdio.h>
int fact(int x);

void main() {
    int n;
    printf("enter n value= ");
    scanf("%d",&n);
    printf("\nFactorial = %d",fact(n));
}
int fact(int x) {
    if(x<=1) {
        return(1);
    }
    else {
        return(x*fact(x-1));
    }
}