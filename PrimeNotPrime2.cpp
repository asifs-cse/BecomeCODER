#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    
    int isPrime(int N){
        int flag =0;
        if(N==0 or N==1){
            flag =1;
        }
        for(int i=2; i<=N/2; i++){
            if(N%i==0){
                flag =1;
                break;
            }
        }
        
        if(flag){
            return 0;
        }else{
            return 1;
        }
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends