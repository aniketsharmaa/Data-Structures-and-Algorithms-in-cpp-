#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

struct node* getNode(){
    struct node *temp;
    temp=malloc(sizeof(struct node));
    return temp;
}

void insertAtEnd(int x,struct node *head){
    struct node *newNode =getNode();
    struct node *temp=head;
    newNode->data=x;
    
    if(head==NULL){
        head=newNode;
    }
    else{
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
    }

   
    
}
void printAll(struct node *head){
    struct node *temp =head;
    while (temp!=NULL)
    {
        printf("%d\n" ,temp->data);
        temp=temp->next;
    }
    
}

int main(){
insertAtEnd(34,head);
insertAtEnd(55,head);
printAll(head);
return 0;
}