#include<bits/stdc++.h>
using namespace std;

int main(){
    int money;
    cin>>money;

    if(money>1000){
        cout<<"Bunk the college, \n go to party\n go to watch movie\n";
    }else if(money<=1000 and money>=500){
        cout<<"Bunk the college";
    }else{
        cout<<"go to college";
    }

    return 0;
}