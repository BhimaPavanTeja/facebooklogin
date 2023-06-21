#include<stdio.h>
void main() {
    char s[50];
    int i,vowel=0,consonant=0,digit=0,space=0;
    printf("enter all types of characters: ");
    gets(s);
    for(i=0;s[i]!='\0';i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
            vowel++;
        }
        else if(s[i]>='0'&&s[i]<='9') {
            digit++;
        }
        else if(s[i]==' ') {
            space++;
        }
        else if(s[i]>='a'&&s[i]<='z') {
            consonant++;
        }
    }
    printf("\nvowel=%d\nconsonant=%d\ndigit=%d\nspace=%d\n",vowel,consonant,digit,space);
}