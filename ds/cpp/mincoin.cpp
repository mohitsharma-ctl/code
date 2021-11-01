#include <bits/stdc++.h>
using namespace std;
int mincoin(int coin[],int amt,int n){
    int t[amt+1],r[amt+1];
    for(int i=0;i<=amt;i++){
        t[i]=1000; r[i]=-1;
    }
    t[0]=0;
    for(int j=0;j<n;j++)
    for(int i=1;i<=amt;i++){
         if(i>=coin[j]){
             if((t[i-coin[j]])+1<t[i])
              { t[i]=(t[i-coin[j]])+1; r[i]=j;}
         }
    }
    if(r[amt]==-1)return -1;
    else return t[amt];
}
int main() {
	int t;cin>>t;
	while(t--){
	    int n,amt;
	    cin>>n>>amt;
	    int coin[n];
	    for(int i=0;i<n;i++)
	       cin>>coin[i];
	   cout<<mincoin(coin,amt,n)<<"\n";
	}
	return 0;
}
