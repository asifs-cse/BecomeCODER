#include<bits/stdc++.h>
using namespace std;

int main(){
    int balls[15];
    int ashok=0, tevit=0;

    for(int i=0; i<14; i++){
        if(balls[i]%2==0){
            ashok++;
        }else tevit++;
    }

    cout<<"Ashok = "<<ashok;
    cout<<"\nTevit = "<<tevit;
    return 0;
}