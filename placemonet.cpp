#include<bits/stdc++.h>
using namespace std;

int main(){
    string branch;
    int year, back_log;
    double per;
    cout<<"Enter your year, back logk, branch and persentage: ";
    cin>>year>>back_log>>branch>>per;

    if(year == 3 and back_log ==0 and branch == "CSE" or branch =="IOT" or branch=="ECE" and per>=70){
        cout<<"Your are eligable";
    }else{
        cout<<"You are not eligable";
    }

    return 0;
}