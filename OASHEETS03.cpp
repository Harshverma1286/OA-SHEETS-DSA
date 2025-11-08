#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector<int> arr = {-3,2,-4,5,-2,3,2,-6,5};

    vector<int> prefixsum(arr.size());

    prefixsum[0] = arr[0];

    for(int i=1;i<prefixsum.size();i++){
        prefixsum[i] = prefixsum[i-1]+arr[i];
    }

    int max_sum = INT_MIN;

    for(int i=prefixsum.size()-1;i>=0;i--){
        if(prefixsum[i]>max_sum) max_sum = prefixsum[i];
        for(int j=i-1;j>=0;j--){
            if((prefixsum[i]-prefixsum[j])>=max_sum){
                max_sum = prefixsum[i]-prefixsum[j];
            }
        }
    }


    cout<<max_sum;
}