#include <stdio.h>
int main(){
	int n, sum;
	
	printf("Enter The number:");
	scanf("%d",&n);
	
	while(n > 0){
		sum = sum + n%10;
		n = n/10;
	}
	printf("%d",sum);
	return 0;
}
