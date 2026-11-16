#include <stdio.h>
int main(){
	int n, rev = 0, copy;
	
	printf("Enter num:");
	scanf("%d",&n);
	
	copy = n;
	while(copy > 0)
	{
		rev = rev * 10;
		rev = (copy%10) + rev;
		
		copy /= 10;
	}
	
	
	if( n == rev)
	{
		printf("%d is a palidrome", n);
	}
	else
	{
		printf("%d is not a palidrome", n);
	}
	return 0;
}
		
		
		
	
