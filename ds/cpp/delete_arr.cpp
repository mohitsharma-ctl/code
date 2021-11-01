#include <iostream>
using namespace std;
int main(){
	int i,x;
	int a[] = {1,2,3,4,5,6,7};
	int left[10];
	int right[10];
	int count;
	int n = sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++){
		cout<<"Index "<<i<<"- "<<a[i]<<"\n";

	}
	cout<<"enter the element to be deleted";
	cin>>x;
	for(i=0;i<x;i++){
		left[i]=a[i];
	}
	for(i=0;i<x;i++){
		cout<<"Index "<<i<<"- "<<left[i]<<"\n";

	}
	count = n -x;
	for(i=0;i<n-x-1;i++){
		right[i]=a[x+1+i];
		//cout<<"a["<<i<<"]";
		
	}
	for(i=0;i<n-x-1;i++){
		cout<<"Index "<<i<<"- "<<right[i]<<"\n";

	} 
	int a
	return 0;
}


// to be continued