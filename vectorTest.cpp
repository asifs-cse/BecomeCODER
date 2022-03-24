#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ve;
    ve.push_back(10);
    ve.push_back(20);
    ve.emplace_back(30);

    for(int i=0;i<ve.size();i++)cout<<ve[i]<<" ";
    ve.pop_back();
    cout<<"\n";
    for(auto it:ve){
        cout<<it<<" ";
    }
    for(auto it=ve.rbegin();it!=ve.rend();it++){
        cout<<*it<<" ";
    }
    return 0;

}