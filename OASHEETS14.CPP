#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    int n=4;
    vector<int> arr = {2,3,1,5};

    unordered_set<int> s;

    for(auto x:arr){
        s.insert(x);
    }

    for(int i=1;i<=n+1;i++){
        if(s.find(i)==s.end()){
            cout<<i;
            break;
        }
    }
}