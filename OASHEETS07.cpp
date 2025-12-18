#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    vector<int> scores(n,0);


    for(int i=0;i<scores.size();i++){
        cin>>scores[i];
    }

    vector<string> names(n);

    for(int i=0;i<names.size();i++){
        cin>>names[i];
    }

    int max_idx = INT_MIN;
    int max_number = INT_MIN;

    for(int i=0;i<scores.size();i++){
        if(scores[i]>max_number){
            max_number = scores[i];
            max_idx = i;
        }
    }

    cout<<names[max_idx];
}