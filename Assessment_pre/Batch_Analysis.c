#include <stdio.h>
int main(void){
	int num1 = 0, num2 = 0, count = 0;
	printf("Enter value1 and value2:");
	scanf("%d %d", num1,num2);

	for(int i = num1; i <= num2; i++){
		if(i%3 == 0){
			count++;
		}

	}
	printf("%d",count);
}