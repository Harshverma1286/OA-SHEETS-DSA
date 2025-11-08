#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector<int> arr = {-3, 2, -4, 5, -2, 3, 2, -6, 5};

    int max_sum = INT_MIN;

    int curr_sum = 0;

    for(int i=0;i<arr.size();i++){
        curr_sum+=arr[i];

        if(curr_sum>max_sum) max_sum = curr_sum;

        if(curr_sum<0) curr_sum = 0;
    }


    cout<<max_sum;

}