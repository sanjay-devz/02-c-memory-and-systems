#include <stdio.h>
int main()
{
	int n, power, ans = 1;

	scanf("%d %d",&n, &power);

	for(int i = 1; i <= power; i++)
	{
		ans = ans * n;
	}
	printf("%d",ans);
	return 0;

}

		
	
