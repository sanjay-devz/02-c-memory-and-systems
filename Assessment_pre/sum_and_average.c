#include <stdio.h>

int main(void) {
    int n, target;
    int found = 0;

    scanf("%d %d", &n, &target);

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (i + j == target) {
                printf("%d %d\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pairs\n");
    }

    return 0;
}