#include <stdio.h>
int main()
{
	int sum = 0, average = 0, num;
	
	
	for(int i = 1; i <= 10; i++)
	{
		printf("Enter Number %d",i);
		scanf("%d",&num);
		
		sum += num;
	}
	
	average = sum/10;
	
	printf("Sum of the series: %d", sum);
	printf("Average of the series: %d", average);
	
	return 0;
} 
