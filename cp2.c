#include<stdio.h>
#include<string.h>
int main() {
    char str[40];
    printf("enter a string");
    scanf("%s",&str);
    printf("the reversed string is %s",strrev(str));
    return 0;
}