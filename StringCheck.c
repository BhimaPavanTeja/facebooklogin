#include<stdio.h>
#include<string.h>
void main() {
    char str1[20],str2[20];
    int i,j,flag=0;
    printf("enter first string: ");
    gets(str1);
    printf("enter second string: ");
    gets(str2);
    for(i=0,j=0;str1[i]!='\0'||str2[j]!='\0';i++,j++) {
        if(str1[i]!=str2[j]) {
            flag=1;
            break;
        }
    }
    if(flag==0) {
        printf("string are equal");
    }
    else {
        printf("strings are not equal");
    }
}