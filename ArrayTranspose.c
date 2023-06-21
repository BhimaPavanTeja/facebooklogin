#include<stdio.h>
void main() {
    int a[10][10],i,j,r,c;
    printf("enter no of rows and coloumns ");
    scanf("%d%d",&r,&c);
    printf("\nenter %d elements ",r*c);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Transpose of a matrix is : ");
    for(i=0;i<c;i++) {
        for(j=0;j<r;j++) {
            printf("%2d",a[j][i]);
        }
        printf("\n");
    }
}