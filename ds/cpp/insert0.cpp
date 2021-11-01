#include<iostream>
#define MAX 5
using namespace std;
int main(){
    int arr[MAX] = {1,2,3,4};
    int no;
    int n=MAX;
    cout<<"Enter the [0] value:";
    cin>>no;
    for(int i=n;i>=0;i--){
        arr[i+1] = arr[i];
        // cout<<arr[i+1];
    }
    arr[0] = no;
    for(int i=0;i<5;i++){
        // arr[i] = arr[i+1];
        cout<<arr[i];
    }
}

// inserting the element at 0th index of arrays


// logic

    // shift the rest of array to 1 position ahead