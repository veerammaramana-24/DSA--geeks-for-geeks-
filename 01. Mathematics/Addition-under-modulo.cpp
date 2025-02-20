//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
    public:
    long long m = 1e9 + 7;
    long long sumUnderModulo(long long a,long long b)
    {
        long long s =((a)%m + (b)%m)%m ; 
  
         return s; 
// code here
    }
};
//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.sumUnderModulo(a,b)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends