#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char x[100], y[100];
    char x_line = 0, y_line = 0;

    printf("input x: ");
    scanf("%s", x);
    x_line = strlen(x);

    printf("input y: ");
    scanf("%s", y);
    y_line = strlen(y);

    int nums1 = x_line < y_line ? x_line : y_line;
    int nums = nums1 * 2;

    int *ans = malloc(nums * sizeof(int));

    if(ans == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }

    for(int i = 0; i < nums1; i++) {
        ans[i * 2] = x[i] - '0';
        ans[i * 2 + 1] = y[i] - '0';
    }

    // printf("ans = [");
    for(int i = 0; i < nums; i++) {
        printf("%d ", ans[i]);
        // if(i != nums - 1) printf(", ");
    }
    printf("\n");

    free(ans);

    return 0;
}
