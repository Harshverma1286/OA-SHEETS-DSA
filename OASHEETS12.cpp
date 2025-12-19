#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter x :";
    cin>>x;

    int y;
    cout<<"enter y : ";
    cin>>y;

    int ans = 0;

    for(int i=x;i>=0;i--){
        if(i%y==0){
            ans = i;
            break;
        }
    }

    cout<<ans;
}