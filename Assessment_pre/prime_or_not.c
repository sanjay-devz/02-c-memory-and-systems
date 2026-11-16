#include <stdio.h>
int main(){
	int n, flag = 0, i;
	
	printf("Enter the num");
	scanf("%d",&n);
	
	for(i = 2; i < n; i++)
	{
		if(n%i != 0){
			continue;
		}
		else{
			flag = 1;
		}
	}
	if(flag == 0)
	{
		printf("Its a prime");
	}
	else{
		printf("Its not a prime");
		}
	
	return 0;

}
