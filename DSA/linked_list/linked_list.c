#include<stdio.h>
#include<stdlib.h> //for malloc function

struct node {
    int data;
    struct node *next;
};

struct node *head, *new, *temp; // global pointers

int main() {
    int choice; //1->yes/0->no
    
    do
    {
        // Allocating memory space
        new = malloc(sizeof(struct node));

        printf("Enter value: ");
        scanf("%d", &new->data);
        new -> next = NULL;

        if (head == NULL)
        {
            head = temp = new;
        }
        else
        {
            temp -> next = new;
            temp = temp -> next;
        }
        printf("want to add one more node? (1->yes/0->no): ");
        scanf("%d", &choice);
    } 
    while (choice == 1);
    
}