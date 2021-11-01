#include<iostream>
#define MAX 10
using namespace std;
int main(){

    int arr[MAX] = {1,2,3,4};
    int no;
    int n = 4;
    for (int i = 0; i < n ; i++)
    {
    cout<<arr[i];
    }
    cout<<"Enter the element at last pos";
    cin>>no;
    arr[n] =no;
    for (int i = 0; i <= n ; i++)
    {
    cout<<arr[i];
    }

    // inserting element at last

    //logic 

    // at the last index

    // insert index at n+1

    // print it




}