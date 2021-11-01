#include<stdio.h>
#include<iostream>
using namespace std;

void sell(int a[]){
    int profit = 0;
    for(int i=0;i<7;i++){
        // cout<<a[i]<<" ";
        profit = a[i+1] - a[i];
    }
    cout<<profit;
}
int main(){
    int A[] = {100,180,260,310,40,535,695};
    sell(A);
    
}

