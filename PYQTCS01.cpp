#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    string s = "###***";

    int hashcount = 0;
    int starcount = 0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='#') hashcount++;
        else starcount++;
    }

    if(hashcount>=starcount) cout<<hashcount-starcount;
    else cout<<starcount-hashcount;
}