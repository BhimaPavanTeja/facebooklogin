#include<stdio.h>
void main() {
    int a[100],sum=0,i,n;
    float avg;
    printf("enter size of an array ");
    scanf("%d",&n);
    printf("\nenter array of elements : ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        sum = sum + a[i];
    }
    avg = sum/n;
    printf("sum is %d",sum);
    printf("average is %f",avg);
}