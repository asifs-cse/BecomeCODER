#include<bits/stdc++.h>
using namespace std;

int main(){
    int table, range;
    cin>>table>>range;

    for (int i = 1; i <= range; i++)
    {
        cout<<table<<" x "<<i<<" = "<<table*i<<endl;
    }
    
    return 0;
}