#include<stdio.h>
void main() {
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
    printf("enter the rows and coloumns of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("\nenter the rows and coloumns of second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2) {
        printf("multiplication of matrix is not possible.");
    }
    else {
        printf("\nenter %d elements in the first matrix: ",r1*c1);
        for(i=0;i<r1;i++) {
            for(j=0;j<c1;j++) {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nenter %d elements in the second matrix: ",r2*c2);
        for(i=0;i<r2;i++) {
            for(j=0;j<c2;j++) {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\nthe resultant matrix is \n");
        for(i=0;i<r1;i++) {
            for(j=0;j<c2;j++) {
                c[i][j]=0;
                for(k=0;k<c1;k++) {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                printf("%3d",c[i][j]);
            }
            printf("\n");
        }
    }
}