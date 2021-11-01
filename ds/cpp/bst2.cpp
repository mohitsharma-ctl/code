#include<iostream>
#include<stdio.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* root = NULL;

void insert(int x){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node *ptr;
    struct Node *parent;
    temp->data = x;

    if(root == NULL)
    {   root  = temp;
        temp->left=NULL;
        temp->right=NULL;
    }
    else{
        ptr = root;
        if(temp->data>ptr->data)
        {
            temp  = ptr->right;
        }
    }


}



int main(){

insert(10);
insert(40);
cout<<root->data;
struct Node *x = root->right;
cout<<x->data;

}