#include <stdio.h>
#include <math.h>

int main() {
    int x,y,power;
    printf("enter x = ");
    scanf("%d",&x);
    printf("enter y = ");
    scanf("%d",&y);
    power = pow(x,y);
    printf("answer = %d",power);
}