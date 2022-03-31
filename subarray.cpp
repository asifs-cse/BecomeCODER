#include<bits/stdc++.h>
using namespace std;

long long N=10000000;
vector<bool> primes(N,true);
vector<int> prefix(10000000,0);

void Gen_Series(){
    primes[0]= primes[1] = false;
    for(int i=2;i*i;i++){
        if(primes[i]==true){
            for(int j =i*i; j<=N;j+=i){
                primes[j]=false;
            }
        }
    }
    
}

int main(){
    void Gen_Series();
    int Q;
    cin>>Q;
    while(Q--){
        long long n;
        int count=0;
        cin>>n;
        cout<<count<<endl;
    }
    return 0;
}