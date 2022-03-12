#include<bits/stdc++.h>
using namespace std;

int main(){
    string branch;
    int year, back_log;
    double per;
    cout<<"Enter your year\n";
    cin>>year;
    cout<<"Enter your back log: \n";
    cin>>back_log;
    cout<<"Enter your branch: \n";
    cin>>branch;
    cout<<"Entr your persentange: \n";
    cin>>per;

    if(year == 3 and back_log ==0 and branch == "CSE" or branch =="IOT" and per>=70){
        cout<<"Your are eligable";
    }else{
        cout<<"You are not eligable";
    }

    return 0;
}