#include <stdio.h>
int main(){
	int n, even_sum, odd_sum;
	
	scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        if(i%2 == 0)
        {
            even_sum += i;
        }
        else
        {
            odd_sum += i;
        }
    }
    printf("even sum: %d\n",even_sum);
    printf("odd sum: %d", odd_sum);

    return 0;

}

	
