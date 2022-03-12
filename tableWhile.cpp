#include<bits/stdc++.h>
using namespace std;

int main(){
    int table, range,i=1;
    cin>>table>>range;

    while (i<=range)
    {
        cout<<table<<" x "<<i<<" = "<<table*i<<endl;
        i++;
    }
    
    return 0;
}