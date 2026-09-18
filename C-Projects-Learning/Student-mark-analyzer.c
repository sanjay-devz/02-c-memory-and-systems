#include <stdio.h>

int main(){

    int mark = 0;
    int total = 0;
    int highest = 0;
    int lowest = 100;
    int passed = 0;
    int failed = 0;
    float average;
    
    printf("Enter 10 Students Marks:\n ");

    for (int i = 0; i < 10; i++ ) {
        scanf("%d", &mark);

        total += mark;

        if (mark  > highest){
            highest = mark;
        }

        if (mark < lowest){
            lowest = mark;
        }

        if (mark >= 50){
            passed++;
        }else{
            failed++;
        }      
    }
    average = total / 10.0;
    
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Highest: %d\n", highest);
    printf("Lowest: %d\n", lowest);
    printf("Passed: %d\n", passed);
    printf("Failed: %d\n", failed );

    return 0;


}