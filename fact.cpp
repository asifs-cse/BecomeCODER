#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i=1; i*i<=num; i++){
        if(num%i==0){
            cout<<i<<" ";
            if(num/i!=i){
                cout<<num/i<<" "; //fact
            }
        }
    }
    return 0;
}