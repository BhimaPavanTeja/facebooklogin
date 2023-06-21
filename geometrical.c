#include <stdio.h>
void main() {
    int choice,r,l,w,b,h,area,ar,are;
    
    printf("input 1 for area of circle\n");
    scanf("%d",&r);
    area = 3.14*r*r;
    printf("input 1 for area of rectangle\n");
    scanf("%d%d",&l,&w);
    ar=l*w;
    printf("input 1 for area of triangle\n");
    scanf("%d%d",&b,&h);
     are = (b*h)/2;
    
    
    printf("the area is : %d %d %d\n",area,ar,are);
}