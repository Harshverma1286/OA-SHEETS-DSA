#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"enter the following words : ";
    cin>>s;

    int incrementvalue = 0;
    cout<<"enter the increment value : ";
    cin>>incrementvalue;

    bool smallchars = false;
    bool capitalchars = false;
    bool integerval = false;
    bool specialchars = false;

    for(int i=0;i<s.length();i++){
        int ascii = (int)s[i];

        if(ascii>=65 && ascii<=90 && capitalchars==false){
            capitalchars = true;
        }
        else if(ascii>=47 && ascii<=122 && smallchars==false){
            smallchars = true;
        }
        else if(ascii>=48 && ascii<=57 && integerval==false){
            integerval = true;
        }
        else if((ascii==35 || ascii==64) && specialchars==false){
            specialchars = true;
        }
    }

    if(smallchars==false || specialchars==false || integerval==false || specialchars==false){
        cout<<"IT IS NOT THE CORRECT PASSWORD PLEASE FIX IT !!";
        return 0;
    }
    string ans = "";

    for(int i=0;i<s.length();i++){
        if(s[i]=='@'){
            ans+='#';
        }
        else if(s[i]=='#') ans+='@';
        else{
            int ascii = (int)s[i];
            ascii+=2;
            char ch = (char)ascii;
            ans+=ch;
        }
    }
    cout<<ans;
}