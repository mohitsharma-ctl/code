#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *link;
    
};
struct Node *head = NULL;

void insert_at_end(int x){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node * ptr;
    // ptr = head;
    temp->data = x;
    temp->link=NULL;
    if(head==NULL){
        // cout<<"working";
        head = temp;
        
        }

    else{

        ptr=head;
        while(ptr->link!=NULL){
            ptr = ptr->link;
        }
        ptr->link = temp;
    
    }

}

void insert_at_start(int x){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node * ptr;
    temp->data = x;
    if(head==NULL){
       temp->link = NULL;
        head = temp;
    }
    else{
        temp->link = head;
        head  = temp;
    }


}

void delete_at_last(){
    struct Node *ptr;
    struct Node *ptr1;
    ptr = head;
    ptr1 = ptr;

    if(head==NULL){
        return;
    }

    if(head->link==NULL){
        delete(head);
    }

    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    while(ptr1->link->link!=NULL){
        ptr1=ptr1->link;
    }
    ptr1->link= NULL;
    

   struct Node* delete_node  = ptr;
   delete(delete_node);
   delete_node->link=NULL;
}

void delete_at_start(){

    struct Node *ptr=head;
    head=head->link;
    ptr->link=NULL;
    delete(ptr);
    // head = ptr->link;

}
void display(){
    int i = 0;
    struct Node *ptr;
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<"["<<i<<"] ";
        ptr = ptr->link;
        i++;
    }
    
}

void insert_at_loc(){


struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
struct Node* ptr;
struct Node* ptr1;

    int i=0;
    int n;
    int x;


    // struct Node *ptr;
    ptr = head;
    ptr1 = head;
    while(ptr!=NULL)
    {   i++;
        ptr = ptr->link;
    }
    cout<<"length of list: "<<i<<"\n";
    cout<<"enter the location to be inserted";
    cin>>n;
    for(int i=0;i<n-1;i++){
        ptr1=ptr1->link;
    } 
    cout<<"enter the data to be inserted";
    cin>>temp->data;
    temp->link = ptr1->link;
    ptr1->link = NULL;
    ptr1->link = temp;


}




void delete_at_loc(){

    struct Node *ptr;
    struct Node *ptr1;
    struct Node *temp;
    ptr = head;
    ptr1 = head;
    int i=0;
    int n;
    while(ptr->link!=NULL){
        cout<<"arr["<<i<<"]= "<<ptr->data<<" ";
        ptr = ptr->link;
        i++;
    }
    cout<<"arr["<<i<<"]= "<<ptr->data<<" ";
    cout<<"\ntotal nodes "<<i<<"\n";
    cout<<"enter the node no to delete\n";
    cin>>n;
    if(n==0){
    delete_at_start();
    
    }else{

    struct Node *ptr2;
    struct Node *del_ptr;
    for(int x=0;x<n-1;x++){
        ptr1 = ptr1->link;
    }

    // cout<<ptr1->data;
    temp = ptr1->link;
    ptr2 = temp->link;
    temp->link = NULL;
    // cout<<temp->data;
    ptr1->link = ptr2;
    delete(temp);
    }


}
int main(){

insert_at_end(1);
insert_at_end(2);
insert_at_end(3);
insert_at_end(4);
insert_at_end(5);
insert_at_end(6);
insert_at_end(7);
insert_at_end(8);
insert_at_end(9);
insert_at_start(0);
// delete_at_loc();
insert_at_loc();
display();

}


