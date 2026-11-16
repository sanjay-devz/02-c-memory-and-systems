#include <stdio.h>
int main()
{
    int n, i = 1, temp, HighTemp = 0;

    scanf("%d",&n);

    while(i <= n)
    {
        scanf("%d",&temp);

        if(temp > HighTemp)
        {
            HighTemp = temp;
        }
     i++;
    }
    printf("%d",HighTemp);
    return 0;
}
