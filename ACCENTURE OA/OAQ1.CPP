#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "hello world";
    char c = 'l';
    int n = 10;

    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            count++;
        }
    }

    cout<<count;
}