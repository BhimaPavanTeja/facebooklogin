#include<stdio.h>
#include<math.h>
 void main() {
    float p,r,t,a,si,ci;
    printf("enter principle:");
    scanf("%f",&p);
    printf("enter time:");
    scanf("%f",&t);
    printf("enter rate:");
    scanf("%f",&r);
    si=p*t*r/100;
    printf("simple interest=%f",si);
    ci=p*(pow(1+r/100,t)-1);
    printf("compound interest=%f",ci);

}