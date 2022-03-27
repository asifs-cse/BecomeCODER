#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> vect{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }; //create two d vector

    for(int i=0; i<vect.size(); i++){
        for(int j=0;j<vect[i].size(); j++){
            cout<<vect[i][j]<<" "; //print vector value
        }
        cout<<endl;
    }
    return 0;
}