#include<iostream>
#define MAX 5
using namespace std;
int main(){
    int arr[] = {1,2,4,5};
    int no;
    int n=MAX;
    int index;
    for(int i=0;i<=3;i++){
        cout<<arr[i];
    }
    cout<<"\nEnter the index:";
    cin>>index;
    cout<<"\nEnter the element at index 2:";
    cin>>no;
    
    for(int i=4;i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = no;
    
    for(int i=0;i<=4;i++){
        cout<<arr[i];
    }
}


// logic

// take input

// shift the index after 1 digit after input