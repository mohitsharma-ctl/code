#include<bits/stdc++.h>
using namespace std;

string rev(string m){
        //code here
	if(m.size()==0){
		return m;
	}
	else{

		return rev(m.substr(1,m.length()))+m[0];		
	} 
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    
    string m;
    cin>>m;
    // long long int a;
    cout<<rev(m);
    // cout<<m;
    // cout<<m;
	return 0;
}