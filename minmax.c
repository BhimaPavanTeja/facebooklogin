#include<stdio.h>
void main() {
    int r,n;
    int max=0;
    int min=9;
    printf("enter the value ");
    scanf("%d",&n);
    while(n>0) {
        r=n%10;
        if(r<min) {
           min=r;  
        }
        if(r>max) {
            max=r;
        }
        n /= 10;
    }
    printf("%d is max,%d is min",max,min);
}