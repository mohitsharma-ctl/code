#include<iostream>
using namespace std;

// void unique_array(int a){

// }

int main(){
    int flag = 0;
    int a[] = {3,4,3,5};
    int unique = {};
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
    if(a[0]==a[i]){
        flag++;
    }
    }
    cout<<flag;
}