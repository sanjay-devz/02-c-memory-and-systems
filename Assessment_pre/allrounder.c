#include <stdio.h>
int main()
{
    int num, even_sum = 0, odd_sum = 0, last_digit = 0;

    scanf("%d",&num);

    for(int i = 1; i <= num; i++)
    {
        last_digit = num%10;

        if(last_digit%2 == 0)
        {
            even_sum++;
        }
        else
        {
            odd_sum++;
        }
        num = num/10;
    }
    printf("even: %d\n",even_sum);
    printf("odd: %d", odd_sum);
    
    return 0;
}
