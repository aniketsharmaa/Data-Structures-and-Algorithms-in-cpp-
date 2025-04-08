#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *middle, *last;
    head=malloc(sizeof(struct node));
    middle=malloc(sizeof(struct node));
    last=malloc(sizeof(struct node));

    head->data = 3;
    middle->data = 4345;
    last->data = 6565;

    head->next = middle;
    middle->next = last;
    last->next = NULL;


   struct node *temp =head;
    while (temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}