#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n,0);

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        v[i] = val;
    }

    sort(v.begin(),v.end());

    int val = v[0];

    int ans = abs(val);

    if(ans>v[v.size()-1]){
        int finalans = v[0]*v[1]*v[v.size()-1];
        cout<<finalans;
        return 0;
    }
    else if(ans==v[v.size()-1]){
        int finalans = max(v[0]*v[1]*v[v.size()-1],v[v.size()-1]*v[v.size()-2]*v[v.size()-3]);
        cout<<finalans;
        return 0;
    }
    else{
        int finalans = v[v.size()-1]*v[v.size()-2]*v[v.size()-3];
        cout<<finalans;
        return 0;
    }
}