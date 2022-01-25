#include<bits/stdc++.h>
using namespace std;

void no(int n){
        //code here
	
	if(n<0){
		return;
	}
	
		no(n-1);
		cout<<n;
		return;	
	// return res;   
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