#include<stdio.h>
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("After swapping: x = %d, y = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y);
    
    return 0;
}