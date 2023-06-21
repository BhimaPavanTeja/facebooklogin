#include <stdio.h>
int main() {
    char name[100];
    int l,i;

    printf("Enter a name: ");
    scanf("%s",name);

    for(l=0;name[l]!='\0';l++); 

    printf("Reversed name: ");
    for (i=l-1;i>=0;i--) {
        printf("%c",name[i]);
    }
    printf("\n");

    return 0;
}