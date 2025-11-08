#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0,1,2,3,4,5,6};

    int k = 9;

    vector<int> prefixsum(arr.size());
    prefixsum[0] = arr[0];

    for(int i=1;i<prefixsum.size();i++){
        prefixsum[i]= prefixsum[i-1] + arr[i];
    }

    int count = 0;


    for(int i=prefixsum.size()-1;i>=0;i--){
        if(prefixsum[i]==k) count++;
        for(int j=i-1;j>=0;j--){
            if(prefixsum[i]-prefixsum[j]==k) count++;
        }
    }

    cout<<count;
}