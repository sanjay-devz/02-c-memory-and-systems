#include <stdio.h>
int main(){	
	int n, copy, sum = 0, digit = 0;
	
	printf("Enter num:");
	scanf("%d",&n);
	
	copy = n;
	while(copy > 0){
		copy /= 10;
		digit++;
	}
	
	copy = n;
	
	while(copy > 0){
		int digits =  copy % 10;
		int power = 1;
		
		for(int i = 0; i < digit; i++){
			power *= digits;
		}
		sum += power;
		copy /= 10;
	}
	
	if(sum == n){
		printf("Amstrong number %d",sum);
	}
	else{
		printf("Not Amstrong number");
	}
	return 0;
	
}
		
	
