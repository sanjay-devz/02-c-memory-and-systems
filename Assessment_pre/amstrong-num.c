#include <stdio.h>

int main(void) {
    int n, copy, sum = 0, digits = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Not an Armstrong number\n");
        return 0;
    }

    copy = n;

    /* Count digits; treat 0 as a one-digit number. */
    do {
        digits++;
        copy /= 10;
    } while (copy > 0);

    copy = n;

    do {
        int digit = copy % 10;
        int power = 1;

        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        copy /= 10;
    } while (copy > 0);

    if (sum == n) {
        printf("Armstrong number: %d\n", n);
    } else {
        printf("Not an Armstrong number\n");
    }

    return 0;
}
		
