#include<stdio.h>
int main() {
    int max,a[10][10],i,j,m,n;
    printf("enter no.of rows & cols of matrix: ");
    scanf("%d%d",&m,&n);
    printf("enter %d elements: ",m*n);
    for(i=0;i<m;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n row wise maxim elements: \n");
    for(i=0;i<m;i++) {
        max=a[i][0];
        for(j=0;j<m;j++) {
            if(max<a[i][j]) {
                max=a[i][j];
            }
        }
        printf("row %d = %d\n",i+1,max);
    }
    printf("\n column wise maxim elements: \n");
    for(i=0;i<n;i++) {
        max=a[0][i];
        for(j=0;j<m;j++) {
            if(max<a[j][i]) {
                max=a[j][i];
            }
        }
        printf("column %d = %d\n",i+1,max);
    }
    return 0;
} 