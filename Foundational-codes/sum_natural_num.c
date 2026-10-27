// #include <stdio.h>
// int main(void)
// {
//     int total = 0, i;
//     for (i = 1; i >= 10; i++)
//     {
//         total += i;
//     }
//      printf("%d",total);
//     return 0;
// }

#include <stdio.h>

int main(void) {
    int total = 0, i;

    for (i = 1; i <= 10; i++) {
        total += i;
    }

    printf("Total = %d\n", total);

    return 0;
}