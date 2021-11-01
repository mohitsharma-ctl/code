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
        while(ptr)
        {
            parent = ptr;
        
            if(temp->data>ptr->data)
            {
                ptr = ptr->right;
            }

            temp = parent->right;
        //     else
        //         ptr=ptr->left;
        //     }
        // if(temp->data>parent->data){
        //         temp = parent->right;
        //     }
        // else if(temp->data<parent->data){
        //     temp = parent->left;
        // }
        
        }
                
    }


}



int main(){
insert(10);
insert(40);
insert(50);

cout<<root->right->data;
}