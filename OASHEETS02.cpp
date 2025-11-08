#include<iostream>
using namespace std;

int main(){
    int weight;
    cin>>weight;
    int distance;
    cin>>distance;

    int basemoney = 5;

    int totalweight = weight*2;

    int totaldistance = (distance*0.5)/10;

    int finalans = totaldistance+basemoney+totalweight;

    cout<<finalans;
}