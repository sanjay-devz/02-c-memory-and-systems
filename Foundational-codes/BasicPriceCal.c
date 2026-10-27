#include <stdio.h>
int main(){
    int item = 12;
    float costOfItem = 9.9;
    char currency = '$';
    int totalPrice = item * costOfItem;

    printf("Total item are %d\n", item);
    printf("Cost of each items: %.1f\n", costOfItem);
    printf("The currency used is %c\n", currency);
    printf("The total price: %d%c\n", totalPrice, currency);

}   