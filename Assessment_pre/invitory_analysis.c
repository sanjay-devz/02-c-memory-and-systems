#include <stdio.h>
int main(){
	int start_id, end_id, count = 0;
	
	scanf("%d",&start_id);
	scanf("%d",&end_id);
	
	for(int i = 1; i <= end_id; i++)
	{
		if( i%3 == 0)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
		
		
