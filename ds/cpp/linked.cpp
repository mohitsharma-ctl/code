#include<iostream>
using namespace std;

struct Node
{
    int data;                                           //structure of a node
    struct Node* next;  
    
};

void display(struct Node* ptr){
    // struct Node* ptr;
    // ptr = head;
    while(ptr->next!=NULL){
    cout<<ptr->data;
    ptr = ptr->next;
    }
    
}


int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 2;
    head->next = second;
    second->data=3;
    second->next=third;
    third->data=4;
    third->next=NULL;
    display(head);



    return 0;

}

