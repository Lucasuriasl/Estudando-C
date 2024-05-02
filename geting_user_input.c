#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("You are %d years old", age);

    double gpa;
    printf("\nEnter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa);

    char grade;
    printf("\nEnter you your letter grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s", name);



    return 0;
}
