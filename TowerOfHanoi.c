#include<stdio.h>

void towers(int n, char source, char dest, char intermediate) {
    int i;
    char temp;
    for(i=0; i<(1<<n); i++) {
        if(i%2==1) {
            temp=dest;
            dest=intermediate;
            intermediate=temp;
        }
        else {
            temp=source;
            source=intermediate;
            intermediate=temp;
        }
        printf("Move disk %d from %c to %c\n",((i&(i-1))%3)+1,source,dest);
    }
}

int main() {
    int disks;
    printf("Enter the number of disks: ");
    scanf("%d",&disks);
    towers(disks,'A','C','B');
    return 0;
}
