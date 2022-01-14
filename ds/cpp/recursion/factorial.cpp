#include <iostream>
using namespace std;

int sum_of_no(int i){
 
  if (i==0){
    return 1;
  }

  return i * sum_of_no(i-1);
     //this fnc * recursive call will give result of pending values 
}

int main() 
{
    int x  = sum_of_no(10);
    cout<<x<<endl;
    return 0;
}