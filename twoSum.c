#include <stdio.h>

int main() {
    int nums[100], target;
    printf("Set Target = ");
    scanf("%d", &target);
    printf("\nEnter elements = ");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &nums[i]);
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < i; j++) {
            if(nums[i] + nums[j] == target) {
                printf("\n%d + %d = %d\n", nums[i], nums[j], nums[i] + nums[j]);
            }
        }
    }
    return 0;
}
