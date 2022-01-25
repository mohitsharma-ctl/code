#include<bits/stdc++.h>
using namespace std;

void no(int n){

	if(n<0){
		return;
	}
	
		cout<<n;   
		no(n-1);		
		return;	
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    
    int m;
    cin>>m;
    // long long int a;
    no(m);
    // cout<<m;
    // cout<<m;
	return 0;
}