#include<stdio.h>
void prime();

void main() {
    prime();
}
void prime() {
    int i,n,c=0;
    printf("enter n value ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(n%i==0) {
            c++;
        }
    }
    if(c==2) 
        printf("\n%d is prime",n);
    else 
        printf("\n%d is not prime",n);
}