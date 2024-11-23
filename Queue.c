#include<stdio.h>
#define MAX 20
int n, data, top = -1;
int stack[MAX];
void push();
void pop();
void peek();

char main()
{
    int choice;
    while(1){
        printf("1.push\n2.pop\n3.peek\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:return;
            break;
            default:printf("Wrong Input\n");
            break;
        }
    }
}
    void insert(){
        int item;
        printf("Enter the element to be inserted:\n");
        scanf("%d", &item);
        if(rear == MAX - 1){
            printf("Queue Overflow\n");
        }
        if (front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = item;
}
void del()
{
    int item;
    if(front == -1){
        printf("Queue Underflow\n");
        return;
    }
    front++;
}
void peek()
{
    if(front == -1 || front == rear-1){
        printf("Queue is empty\n");
        return;
    } else {
        printf("The elements in the queue is: %d", queue[front]);
    }
}
