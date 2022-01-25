#include<bits/stdc++.h>
using namespace std;


long long int fib(int n){
        //code here
	if(n==1 or n==2){
		return 1;
	}

	return  fib(n-1)+fib(n-2);
	// return res;   
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    

    long long int a;
    cout<<fib(18);
	return 0;
}