#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c,d,Root1,Root2;
    printf("enter a b c values\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    d = ((b*b)-(4*a*c));
   
    if(d>0) {
        printf("Both roots are real and different\n");
        Root1=(-b+sqrt(d))/(2*a);
        Root2=(-b-sqrt(d))/(2*a);
        printf("First  Root Root1= %.6lf\n", Root1);
        printf("Second Root root2= %.6lf\n", Root2);
        }
    else if(d==0) {
        printf("Both roots are equal\n");
        Root1=Root2=(-b/(2*a));
        printf("First  Root Root1= %0.6lf\n",Root1);
        printf("Second Root Root2= %0.6lf",Root2);
        }
        if(d<0) {
        printf("Roots are imaginary\n");
        }
    return 0;
}
