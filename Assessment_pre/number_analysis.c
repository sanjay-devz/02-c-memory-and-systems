#include <stdio.h>
int main(void){
  int num, even = 0, odd = 0;
  scanf("%d",&num);

  for(int i = 0; i <= num; i++){
    if(i%2 == 0){
      even += i;
    }
    else{
      odd += i;
    }
  }
  return 0;
}