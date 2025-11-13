#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector<int> arr = {5,10,6};

    int max_ele = arr[0];

    int count =1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>arr[i-1] && arr[i]>max_ele){
            count++;
            max_ele = arr[i];
        }
    }
    cout<<count;
}