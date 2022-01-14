#include <iostream>
using namespace std;

int sum_of_no(int arr[],int i,int N){
  if (i==N){
    return arr[i];
  }
  
  return arr[i] + sum_of_no(arr,i+1,N);
}

int main() 
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // cout << "Hello, World!";
    int N = sizeof(arr)/sizeof(arr[0]);
    cout<<N;
    int x  = sum_of_no(arr,0,9);
    cout<<x;
    return 0;
}