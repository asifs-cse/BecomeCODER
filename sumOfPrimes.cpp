#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int primeSum(int n){
        int reverse = 0, remainder;

        while (n != 0) {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            if(reverse%n)
            n /= 10;
        }
        return reverse;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
} 