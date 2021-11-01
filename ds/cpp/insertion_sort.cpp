#include<iostream>
#include<stdio.h>
using namespace std;
// int arr[] = {4,3,2,1};
void insertion(int arr[])
{
for(int i = 0;i<5;i++)
{
    cout<<" "<<arr[i];
}

for (int i = 0; i < 5; i++)
{

    int current = arr[i];
    int j = i-1;
    while (j>=0 && arr[j] > current)
    {
        arr[j+1] = arr[j];
        j--;
    }
    
    arr[j+1] = current; 
    
}
cout<<"\n";

for (int i = 0; i < 5; i++)
    {
        cout<<" "<<arr[i];
    }

}


int main(){
int arr[] = {5,4,3,2,1};

insertion(arr);

}