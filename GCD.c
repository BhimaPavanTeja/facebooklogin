#include <stdio.h>

int main() {
    int gcd, r, s, temp;
    printf("Enter r and s value: ");
    scanf("%d %d", &r, &s);

    if(r == 0) {
        gcd = s;
    } 
    else if(s == 0) {
        gcd = r;
    }
     else {
        while(s != 0) {
            temp = r % s;
            r = s;
            s = temp;
        }
        gcd = r;
    }
    printf("GCD of %d and %d = %d", r, s, gcd);
    return 0;
}
