#include <stdio.h>

int main() {
    char letters[100];
    printf("Enter a letter or word : ");
    scanf("%s",letters);

    printf("converted => ");
    for(int i = 0; letters[i] != '\0'; i++) {
        if(letters[i] >= 'a' && letters[i] <= 'z') {
            printf("%c", letters[i] - 32);
        } else if(letters[i] >= 'A' && letters[i] <= 'Z') {
            printf("%c", letters[i] + 32);
        } 
    }
    return 0;
}