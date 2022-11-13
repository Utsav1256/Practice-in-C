#include<stdio.h>
#include<stdlib.h> //for malloc function

struct node {
    int data;
    struct node *next;
};

struct node *head, *new, *temp; // global pointers

// print the linked list values
void printLinkedlist(struct node *p) {
    printf("\nProvided values: ");
    while(p != NULL) {  
        printf("%d ", p -> data);
        p = p -> next;
    }
}
 
struct node *insertAtBeginning(struct node *head) {
    // Allocating memory space
    new = (struct node*)malloc(sizeof(struct node));
  
    // creating new node
    printf("\nEnter value: ");
    scanf("%d", &new->data);
    new -> next = NULL;

    // inserting the new node add the beginning of the linked list
    new -> next = head;
    head = new;
    // head and new are just pointers, not the node itself.

    printLinkedlist(head);

    // returning head to the main function
    return head;
} 

void insertAtEnd(struct node *head) {
    //Allocating memory space
    new = (struct node*)malloc(sizeof(struct node*));

    // Creating new node
    printf("\nEnter value: ");
    scanf("%d", &new->data);
    new -> next =NULL;

    // going to the last node
    temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }

    // inserting new node at the End of the linked list
    temp -> next = new;

    printLinkedlist(head);
}

int main() {
    int choice; //1->yes/0->no
    
    do
    {
    // Creating linked list
        // Allocating memory space
        new = (struct node*)malloc(sizeof(struct node));
        // (struct node*) -> typecasting -> bcz. datatype of *new is struct node

        // creating new node
        printf("\nEnter value: ");
        scanf("%d", &new->data);
        new -> next = NULL;

        if (head == NULL) // when first node is created
        {
            head = temp = new;
        }
        else
        {
            temp -> next = new;
            temp = temp -> next;
        }

        printf("\nwant to add one more node? (1->yes/0->no): ");
        scanf("%d", &choice);
    }  while (choice == 1);
    
    // Traversing in list
    printLinkedlist(head);

    // LinkedList Operations
    printf("\nLinkedList operation: ");
    do
    {
        printf("\n1. Insert at the Beginning \n2. Insert at the End \n3. Exit");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
        switch(choice) {
            
            case 1: {
                head = insertAtBeginning(head);
                break;
            }
            case 2: {
                insertAtEnd(head);
                break;
            }
            case 3: {
                printf("\nExit point");
                break;
            }
            default: {
                printf("\nPlease Enter a Valid Choice(1/2/3)");
            }
    }
    }  while (choice != 3);
    
   
}