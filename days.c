#include <stdio.h>
void main()
{
    char day;
    printf("enter day ");
    scanf("%c",&day);
    switch(day) {
        case 'M' : printf("monday\n");
               break;
        case 'T': printf("tuesday\n");
            break;
        case 'W' : printf("wednessday\n");
            break;
        case 'H' : printf("thursday\n");
            break;
        case 'F' : printf("friday\n");
             break;
        case 'S' : printf("saturday\n");
             break;
        case 's': printf("sunday\n");
            break;
    }
}