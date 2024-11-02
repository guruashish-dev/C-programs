//print the (char)name age and (float)salary of a person
#include<stdio.h>

int main() {
    char name[50];
    int age;
    float salary;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);

    return 0;
}