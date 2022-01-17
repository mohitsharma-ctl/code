#include <iostream>
#include<stack>
using namespace std;

void insert(stack<int> &st,int x){
  
  if(st.empty()){
    st.push(x);
    return;
  }
  
  int t = st.top();
  st.pop();
  insert(st,x);
  st.push(t);
  
}


int main() 
{
    // cout << "Hello, World!";
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  st.push(6);
  insert(st,3);
  while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
  }
  return 0;
}