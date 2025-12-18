#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count_digits = 0;
    int val = n;

    while(val>0){
        count_digits++;
        val = val/10;
    }
    int sum = 0;
    int anotherval = n;

    while(n>0){
        int rem = n%10;
        int present_sum = 1;
        for(int i=0;i<count_digits;i++){
            present_sum = present_sum*rem;
        }
        sum+=present_sum;
        n/=10;
    }

    if(anotherval==sum){
        cout<<"TRUE";
    }
    else cout<<"FALSE";
}