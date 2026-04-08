#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<arr.size();i++){
        int value;
        cin>>value;
        arr[i]=value;
    }

    int times = arr.size()/3;

    unordered_map<int,int> mp;

    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }

    for(auto x:mp){
        int freq = x.second;
        int value = x.first;

        if(freq>times) cout<<value<<endl;
    }

    
}