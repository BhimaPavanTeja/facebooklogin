#include<stdio.h>
int main() {
    int a[i],n,t;
    printf("enter n value = \n");
    scanf("%d",&n);
    printf("enter %d elements = \n",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
          if(a[i]>a[j]) {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
          }  
        }
    }
    printf("the elements in array of sorted order = \n");
    for(int i=0;i<n;i++)  {
        printf("%d ",a[i]);
    }
    return 0;
}