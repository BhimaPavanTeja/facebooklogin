#include <stdio.h>

int main() {
    int nums[100],target;
    for(int i=0;i<=nums.length;i++) {
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<=nums.length,i++) {
        for(int j=0;j<=i-1;j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d + %d = %d",num[i],num[j],num[i]+num[j]);
            }
    }
    }
    return 0;
}