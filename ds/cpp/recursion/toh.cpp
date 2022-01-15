#include<iostream>
using namespace std;

void toh(int n,int s,int h,int d){
    if(n==1){
        cout<<"move disk "<<n<<" from "<<s<<" "<<d<<endl;
        return;
    }
toh(n-1,s,d,h);  //send all disk from s to h with the help of d   
cout<<"move disk "<<n<<" from "<<s<<" "<<d<<endl;
toh(n-1,h,s,d);   //send all disk from h to d with the help of s
}

int main(){
int n = 3;
int s = 1;
int h = 2;
int d = 3;
toh(n,s,h,d);
}