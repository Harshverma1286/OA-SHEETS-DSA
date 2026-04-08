#include<iostream>
using namespace std;

bool isprime(int n){
    if(n<=1) return false;

    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

bool ischeck(int n){
    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum+=rem;
        n/=10;
    }
    if(isprime(sum)==true) return true;
    else return false;
}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=n;i<=m;i++){
        if(isprime(i)==true && ischeck(i)==true){
            cout<<i<<endl;
        }
    }
}