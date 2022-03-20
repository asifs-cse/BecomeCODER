#include<bits/stdc++.h>
using namespace std;

int main(){
    int table, range,i=1;
    cin>>table>>range;//input table data

    while (i<=range)
    {
        cout<<table<<" x "<<i<<" = "<<table*i<<endl; //output
        i++;
    }
    
    return 0;
}