#include<stdio.h>
#include<string.h>
void main() {
    struct student {
        int rollno;
        char name[30];
        char branch[30];
    }s;
    s.rollno=20;
    strcpy(s.name,"pavan");
    strcpy(s.branch,"CSE-A");
    printf("Roll no = %d\nName = %s\nBranch = %s",s.rollno,s.name,s.branch);
}