// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    long long factorSum(int N)
    {   
        if(N==1){
            return 1;
        }
        unsigned long int sum=0;
        for(int i=1; i<=sqrt(N); i++){
            if(N%i==0){
                if(i==(N/i)){
                    sum +=i;
                }else
                    sum+=(i+N/i);
            }
        }
        return sum;
    }
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
       	cout <<  ob.factorSum(N) << "\n";
   
    }
    return 0;
}