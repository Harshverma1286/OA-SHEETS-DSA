#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<string> ans(n);

    for(int i=0;i<arr.size();i++){
        if(arr[i]%3==0 && arr[i]%5==0){
            ans[i] = "ThreeFive";
        }
        else if(arr[i]%5==0){
            ans[i] = "Five";
        }
        else if(arr[i]%3==0){
            ans[i] = "Three";
        }
        else ans[i] = to_string(arr[i]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}