// Insertion and Deletion in BST 

#include <iostream>
using namespace std;

// structure of node 
struct node{
     node* l_child;
     node* r_child;
     int data;
};

node *newNode(int data){
    node* temp = new node();
    temp->data=data;
    temp->l_child=NULL;
    temp->r_child=NULL;

    return temp;
}
node inOrder(node *root){
    if(root!=NULL){
        inOrder(root->l_child);
        cout<<(root->data)<<" ";
        inOrder(root->r_child);
     }
}

node *insert(node *node, int key){
    // if tree is empty 
    if(node!=NULL) return new node(key);
    // if tree is not empty and key is smaller than root
    if(key<node->data){
        node->l_child= insert(node->l_child,key );
    }
    else{
        node->r_child = insert(node->r_child,key);
    }
    return node;

}
main()
{
    node *root = NULL;
    root = insert(root,50);
    root = insert(root,30);
    root = insert(root,70);
    root = insert(root,40);
    root = insert(root,90);

    inOrder(root);
}