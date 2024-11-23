// // write a program using turnary operator to determine if ur eligible for voting
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter your age: ");
//     scanf("%d", &n);

//     (n>=18)? printf("you are eligible to vote") : printf("you are not eligible to vote");
//     return 0;
// }


// find which number is greater


// #include<stdio.h>
// int main()
// {
//     int a, b;
//     printf("enter value of a and b: ");
//     scanf("%d %d", &a, &b);

//     (a>b)? printf("a is greater than b") : printf("b is greater than a");
//     return 0;
// }

// // to find even or odd number
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter value for a: ");
//     scanf("%d",&a);

//     (a%2==0)? printf("a is an even number") : printf("a is an odd number");
//     return 0;
// }

// to find greatest of 3 numbers
// #include<stdio.h>
// int main()
// {
//     int n1, n2, n3;
//     printf("give values for n1 n2 n3 ");
//     scanf("%d%d%d",&n1, &n2, &n3);

//     (n1>n2)? (n1>n3)? printf("n1 is greater") : printf("n2 is greater") : (n2>n3)? printf("n2 is greater") : printf("n3 is greater");

// }


// to find if the year is leap year 
#include<stdio.h>
int main()
{
    int year;
    printf("Which year is it: ");
    scanf("%d", &year);

    (year%4==0)? (year%100==0)? printf("it is not a leap year") : printf("it is a leap year") : (year%400==0)? printf("it is a leap year") : printf("it is a leap year");
}