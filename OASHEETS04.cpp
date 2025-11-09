#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> arr = {1,5,3,4,1,3,2};

    unordered_map<int,int> mp;

    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }

    int sum = 0;

    for(auto x:mp){
        int freq = x.second;
        if(freq==1){
            sum+=x.first;
        }
    }

    cout<<sum;



}