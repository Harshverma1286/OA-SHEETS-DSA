#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> arr = {0,1,2,3,4,5,6};

    int k = 9;

    unordered_map<int,int> mp;

    int prefixsum = 0;

    int count = 0;

    for(int i=0;i<arr.size();i++){
        prefixsum+=arr[i];

        if(prefixsum==k) count++;

        if(mp.find(prefixsum-k)!=mp.end()){
            count+=mp[prefixsum-k];
        }

        mp[prefixsum]++;
    }

    cout<<count;
}