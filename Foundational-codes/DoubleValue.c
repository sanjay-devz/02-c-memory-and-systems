#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void main(){
    double pi = 3.124343543654654654;
    double e = 2.3343534645765756;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);
    printf("Hello world\n");
    char a = '+A';
    char name[] = "the values are something best";
    printf("%s\n",name);
    printf("grade is %c \n ", a);
    
    bool  isonline = __FLT_HAS_DENORM__;
    printf("is he online %d", isonline);
    
}