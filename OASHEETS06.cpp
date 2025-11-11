#include<iostream>
#include<vector>
using namespace std;

void subsets(vector<int>& arr,int i,vector<int> ans,vector<vector<int>>& finalans){
    if(i==arr.size()){
        finalans.push_back(ans);
        return;
    }

    ans.push_back(arr[i]);
    subsets(arr,i+1,ans,finalans);
    ans.pop_back();
    subsets(arr,i+1,ans,finalans);
}

int main(){
    vector<int> arr = {1,2,3,4};

    int i = 0;

    vector<vector<int>> finalans;

    vector<int> ans;

    subsets(arr,i,ans,finalans);

    for(int i=0;i<finalans.size();i++){
        for(int j=0;j<finalans[i].size();j++){
            cout<<finalans[i][j]<<" ";
        }
        cout<<endl;
    }
}