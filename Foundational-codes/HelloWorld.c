#include <stdio.h>

struct ClassMember
{
    char name[100];
    int rollNumber;
    char className[50];
};

int main(void)
{
    struct ClassMember member;

    printf("Enter member name: ");
    if (fgets(member.name, sizeof(member.name), stdin) == NULL)
    {
        return 1;
    }

    printf("Enter roll number: ");
    if (scanf("%d", &member.rollNumber) != 1)
    {
        fprintf(stderr, "Invalid roll number.\n");
        return 1;
    }

    printf("Enter class: ");
    if (scanf(" %49[^\n]", member.className) != 1)
    {
        fprintf(stderr, "Invalid class.\n");
        return 1;
    }

    printf("\nClass member details\n");
    printf("Name: %s", member.name);
    printf("Roll number: %d\n", member.rollNumber);
    printf("Class: %s\n", member.className);

    return 0;
}