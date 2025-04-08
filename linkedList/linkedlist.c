// Implimentaion of linked list.....

#include <stdio.h>
#include <conio.h>

// Creating user define variable ie struct...

struct node
{
    /* data */
    int data;   
    struct node *next;
};


main() {

    // dynamically allocating memory for all the 3 nodes...

    struct node *head, *middle, *last;
    head=malloc(sizeof(struct node));
    middle=malloc(sizeof(struct node));
    last=malloc(sizeof(struct node));

    // assigning the data 
    head->data=12;
    middle->data=42;
    last->data=30;

    head->next=middle;
    middle->next=last;
    last->next=NULL;

    struct node *temp=head;

    // loop for printing all the emement of the list
    while(temp!=NULL){
        printf("%d \n",temp->data);
        temp = temp->next;
    }    
}
