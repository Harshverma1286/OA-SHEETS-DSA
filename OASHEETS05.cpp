#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main(){
    string s = "hello people hello world";

    unordered_set<string> words;

    string finalans = "";

    int i=0;
    while(i<s.length()){
        string ans = "";
        int j=i;
        while(j<s.length() && s[j]!=' '){
            ans+=s[j];
            j++;
        }
        if(words.find(ans)==words.end()){
            words.insert(ans);
            finalans+=ans;
            finalans+=" ";
        }
        i=j+1;
    }

    cout<<finalans;
}