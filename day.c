#include <stdio.h>
int main() {
    char day = 't';
    
    switch(day) {
        case 'm' : printf("monday \n");
                   break;
        case 't' : printf("tuesday \n");
                   break;
        case 'w' : printf("wednesday \n");
                   break;
        case 'T' : printf("thrusday \n");
                   break;
        case 'f' : printf("friday \n");
                   break;
        case 's' : printf("saturday \n");
                   break;
        case 'S' : printf("sunday \n");
                   break;
         }
        
        return 0;
}