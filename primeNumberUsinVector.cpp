#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        vector<int> prime;
        if(M<2){
            M=2;
        }
        while(M<=N){
            int flag =1;
            for(int i=2; i<=sqrt(M); i++){
                if(M%i==0){
                    flag =0;
                    break;
                }
            }
            if(flag){
                prime.push_back(M);
            }
            M++;
        }
        return prime;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends