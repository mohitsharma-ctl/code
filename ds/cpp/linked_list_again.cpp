#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *link;
    
};
struct Node *head = NULL;
 // insert display


void insert(int x){
     struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
     struct Node *ptr;
     if(head==NULL){
         temp->data = x;
         head=temp;
         temp->link=NULL;
     }else{
         ptr = head;
         while(ptr->link!=NULL){
             ptr=ptr->link;
         }
         ptr->link = temp;
         temp->data = x;
     }
}


int main(){
insert(2);
}