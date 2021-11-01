#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;

    for(int i=1;i<10;i++){
        arr.push_back(i);
    }

    // for(auto i=arr.begin();i!=arr.end();i++){
    //     cout<<*i;
    // }

    cout<<arr.max_size();
}


