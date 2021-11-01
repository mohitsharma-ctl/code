#include<iostream>
using namespace std;
int first = -1;
int last = -1;
int arr[100];


bool check_empty(){
    if(first<last) {
        return true;
    }
    else if(first==-1&&last==-1){
        return true;
    }
    else{
        return false;
    }
}

void display(){

    if(check_empty()!=true){

    for (int i = last; i <= first; i++)
    {
        cout<<arr[i]<<" ";
    }

    }
    else{
        cout<<"array empty";
    }
    
}


void push(int x){
    if(check_empty()==true){
        last++;
    }
    first++;
    arr[first] = x;
}

void pop(){
    if(check_empty()==true){
        cout<<"stack is empty";
    }
    else{
        last++;
    }
}
int main(){

int arr[] = {};
push(3);
push(4);
push(5);
push(6);
pop();
pop();
pop();
pop();
push(7);
display();
// cout<<flag;
}






// push 
// pop
// check empty