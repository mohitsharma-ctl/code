#include<iostream>
using namespace std;
int flag=-1;
int arr[100];



bool check_empty(){
    if(flag==-1){
        return true;
    }
    else{
        return false;
    }
}

void display(){
    for (int i = 0; i <= flag; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


void push(int x){

    flag++;
    arr[flag] = x;
}

void pop(){
    if(check_empty()==true){
        cout<<"stack is empty";
    }
    else{
        flag--;
    }
}
int main(){

int arr[] = {1,2,3,4};
push(3);
push(4);
push(5);
pop();
push(6);
pop();
display();
// cout<<flag;
}






// push 
// pop
// check empty