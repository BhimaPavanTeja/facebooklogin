#include <stdio.h>

int main() {
    FILE *File;
    char text[100];

    File = fopen("output.txt", "w");

    printf("Enter text to write to file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(File, "%s", text);

    fclose(File);

    printf("Text written to file successfully.");
    return 0;
}
