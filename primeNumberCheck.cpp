#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

// Complete this function
string isPrime(int n) {
    int flag =0;
    if(n==0 or n==1){
        flag =1;
    }
    for (int i = 2; i <= n/2; i++) {
        if(n%i==0){
            flag =1;
            break;
        }
        
    }
    if(flag==1){
        return "No";
    }else{
        return "Yes";
    }
}


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << isPrime(n) << endl;
    }
    return 0;
}  // } Driver Code Ends