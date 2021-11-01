
#include<stdio.h>
#include<iostream>

int edge(int x,int y);

using namespace std;
int main(){
int a[10][10];
int v,i,j,x;
cout<<"enter the no of vertex";
std::cin>>v;
cout<<"done";
for(i=0;i<=v;i++){
	for(j=0;j<=v;j++)	{
			a[i][j]=0;
				}
		}


cout<<"check number of edge";
cin>>x;
while(x>0){
cout<<"enter the edge link";
cin>>i>>j;
a[i][j]=1;
//a[j][i]=1;
x--;
}

	for(i=0;i<=v;i++){
			cout<<"\n";
		for(j=0;j<=v;j++){
//a[i][j]=0;
			cout<<"\t"<<a[i][j];	
				} 
			}

}

