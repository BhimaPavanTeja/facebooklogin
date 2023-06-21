#include<stdio.h>
void main() {
    int arr1[10],arr2[10],arr3[10];
    int i,j=0,k=0,n;
    printf("\n seperate odd and even numbers in array : \n");
    printf("input the number of elements in the arrays : \n");
    scanf("%d",&n);
    printf("input %d elements in the array : \n",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++) {
        if(arr1[i]%2==0) {
            arr2[j]=arr1[i];
            j++;
        }
        else {
            arr3[k]=arr1[i];
            k++;
        }
    }
    printf("\n the even elements are : \n");
    for(i=0;i<j;i++) {
        printf("%d\n",arr2[i]);
    }
    printf("\n the odd elements are : \n");
    for(i=0;i<k;i++) {
        printf("%d\n",arr3[i]);
    }
    printf("\n");
}