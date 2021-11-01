#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *first;
    struct Node *last;
};
struct Node *head=NULL;

void insert_at_last(int x){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node *ptr;
    temp->data = x;

    if(head == NULL)
    {   head  = temp;
        temp->first=NULL;
        temp->last=NULL;
    }
    else{
        ptr = head;
        while(ptr->last!=NULL){
            ptr = ptr->last;
        }
        ptr->last = temp;
        temp->first = ptr;

    }
}

void display(){
    struct Node* ptr;
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr = ptr->last;
    }
}


void delete_at_last(){
    
struct Node* ptr;
struct Node* temp;
ptr = head;
while(ptr->last->last!=NULL){
    ptr = ptr->last;    
}
ptr->last = temp;
ptr->last = NULL;
temp->first = NULL;
delete(temp);


}
void insert_at_start(int x){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node * ptr;
    temp->data = x;
    if(head==NULL){
       temp->last = NULL;
        temp->first=NULL;
        head = temp;
    }

    else{
        temp->last = head;
        temp->first = NULL;
        head  = temp;
    }
}
void insert_at_loc(){

struct Node * temp = (struct Node*)malloc(sizeof(struct Node));
struct Node * ptr;


int i = 0,x,no;
while (ptr!=NULL)
{
    i++;
    ptr = ptr->last;
}
cout<<"total elements: "<<i;
cout<<"\nenter the location of node";
cin>>x;
cout<<"\nenter the data";
cin>>no;
if(x==0){
insert_at_start(no);
}
else if(x == i){
insert_at_last(no);
}
else{
    temp->data = no;
    struct Node* ptr1;
    struct Node* ptr2;
    ptr1 = head;
    for(int q=0;q<x-1;q++){
        ptr1=ptr1->last;
    }
    ptr2 = ptr1->last;
    ptr1->last = NULL;
    ptr1->last = temp;
    temp->first = ptr1;
    ptr2->first = NULL;
    temp->last = ptr2->last;
    ptr2->last = NULL;
    temp->last->first=NULL;
    temp->last->first = temp;
    delete(ptr2);

    
}

}

void display_at_last(){
cout<<"\n";
int i = 0;
struct Node* ptr;
struct Node* end;
ptr = head;
while(ptr->last!=NULL){

    ptr=ptr->last; 
}

end = ptr;

while(end->last!=NULL){
    
    cout<<end->data;
    end = end->first;
}

}

void delete_at_loc(){
int i=0;
int no;
struct Node* ptr;
struct Node* ptr1;
ptr = head;
while(ptr!=NULL){
    i++;
    ptr = ptr->last;
}
cout<<"total elements "<<i;
cout<<"enter the location to delete";
cin>>no;
if(no==0){
NULL;
//delete at first function needs to added
}
else if(no == i){
    NULL;
}
else{
    struct Node * ptr2;
    struct Node * ptr3;
    ptr1 = head;
    for(int q=0;q<no-1;q++){
        ptr1=ptr1->last;
    }
    ptr2 = ptr1->last;
    ptr3 = ptr2->last;
    ptr1->last = NULL;
    ptr2->first = NULL;
    ptr1->last = ptr3;
    ptr3->first = NULL;
    ptr3->first = ptr1;
    delete(ptr2);


}

}
int main(){

    insert_at_last(1);  
    insert_at_last(2);
    insert_at_last(3);
    insert_at_last(4);
    insert_at_last(5);
    insert_at_start(0);
    display();
    display_at_last();
    delete_at_loc();
    display();
}