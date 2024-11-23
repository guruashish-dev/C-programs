#include <stdio.h>
#include <stdlib.h>

// Define the structure for linked list nodes
struct node {
    int info;
    struct node *link;
} *START = NULL;

// Function prototypes
void create_list(int data);
void display();
void count();
void addatbeg(int data);
void addafter(int data, int pos);
void addatend(int data);
void delatbeg();
void delinbet(int data);
void deleteend();
void search(int data);
void reverse();

int main() {
    int choice, n, m, pos, i;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create List\n");
        printf("2. Display List\n");
        printf("3. Count Elements\n");
        printf("4. Add at Beginning\n");
        printf("5. Add Element After\n");
        printf("6. Add at the End\n");
        printf("7. Delete Element at the Beginning\n");
        printf("8. Delete Element in Between\n");
        printf("9. Delete Element at the End\n");
        printf("10. Search Element\n");
        printf("11. Reverse the List\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("How many nodes? ");
                scanf("%d", &n);
                printf("Enter the elements:\n");
                for (i = 0; i < n; i++) {
                    scanf("%d", &m);
                    create_list(m);
                }
                break;

            case 2:
                display();
                break;

            case 3:
                count();
                break;

            case 4:
                printf("Enter element: ");
                scanf("%d", &m);
                addatbeg(m);
                break;

            case 5:
                printf("Enter the element and position to add after: ");
                scanf("%d %d", &m, &pos);
                addafter(m, pos);
                break;

            case 6:
                printf("Enter element: ");
                scanf("%d", &m);
                addatend(m);
                break;

            case 7:
                delatbeg();
                break;

            case 8:
                printf("Enter element to delete in between: ");
                scanf("%d", &m);
                delinbet(m);
                break;

            case 9:
                deleteend();
                break;

            case 10:
                printf("Enter the element to search for: ");
                scanf("%d", &m);
                search(m);
                break;

            case 11:
                reverse();
                break;

            case 12:
                exit(0);

            default:
                printf("Wrong choice!\n");
        }
    }
    return 0;
}

// Function to create a list
void create_list(int data) {
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;

    if (START == NULL) {
        START = temp;
    } else {
        q = START;
        while (q->link != NULL) {
            q = q->link;
        }
        q->link = temp;
    }
}

// Function to display the list
void display() {
    struct node *q = START;
    if (q == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("List elements: ");
    while (q != NULL) {
        printf("%d -> ", q->info);
        q = q->link;
    }
    printf("NULL\n");
}

// Function to count elements
void count() {
    struct node *q = START;
    int c = 0;
    while (q != NULL) {
        c++;
        q = q->link;
    }
    printf("Total number of elements in the list: %d\n", c);
}

// Function to add at the beginning
void addatbeg(int data) {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = START;
    START = temp;
}

// Function to add at the end
void addatend(int data) {
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;

    if (START == NULL) {
        START = temp;
    } else {
        q = START;
        while (q->link != NULL) {
            q = q->link;
        }
        q->link = temp;
    }
}

// Function to delete at the beginning
void delatbeg() {
    struct node *temp;
    if (START == NULL) {
        printf("List is empty.\n");
        return;
    }
    temp = START;
    START = START->link;
    free(temp);
}

// Function to delete in between
void delinbet(int data) {
    struct node *q, *temp;
    if (START == NULL) {
        printf("List is empty.\n");
        return;
    }
    q = START;
    while (q->link != NULL && q->link->info != data) {
        q = q->link;
    }
    if (q->link == NULL) {
        printf("Element not found.\n");
        return;
    }
    temp = q->link;
    q->link = temp->link;
    free(temp);
}

// Function to delete at the end
void deleteend() {
    struct node *q, *temp;
    if (START == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (START->link == NULL) {
        free(START);
        START = NULL;
        return;
    }
    q = START;
    while (q->link->link != NULL) {
        q = q->link;
    }
    temp = q->link;
    q->link = NULL;
    free(temp);
}

// Function to search an element
void search(int data) {
    struct node *q = START;
    int pos = 1;

    while (q != NULL) {
        if (q->info == data) {
            printf("Element found at position %d\n", pos);
            return;
        }
        pos++;
        q = q->link;
    }
    printf("Element not found.\n");
}

// Function to reverse the list
void reverse() {
    struct node *prev = NULL, *curr = START, *next = NULL;
    while (curr != NULL) {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    START = prev;
    printf("List reversed.\n");
}
