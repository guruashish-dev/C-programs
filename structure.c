#include <stdio.h>

struct student {
    char name[100];
    int roll_number;
    char branch[10];
    int py;
};

int main() {
    struct student s;

    printf("Enter the roll number: ");
    scanf("%d", &s.roll_number);

    printf("Enter the passing year: ");
    scanf("%d", &s.py);

    getchar();

    printf("Enter the name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter the branch: ");
    scanf("%s", s.branch);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", s.roll_number);
    printf("Name: %s", s.name);
    printf("Branch: %s\n", s.branch);
    printf("Passing Year: %d\n", s.py);

    return 0;
}
