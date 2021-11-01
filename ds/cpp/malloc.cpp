#include<iostream>
using namespace std;
int main()
{

    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 10; 
    ptr[1] = 20 ;
//    cout<<&ptr<<"\n";
   cout<<ptr[2];
} // namespace std
