//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
    public:
    const long long m = 1e9 + 7;
    int multiplicationUnderModulo(long long a,long long b)
    {
      
      return ((a%m) * (b%m))%m;
      
//your code here
    }
};
//{ Driver Code Starts.
int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    
	    //taking input a and b
	    cin>>a>>b;
	    Solution ob;
	    //calling multiplicationUnderModulo() function
	    cout<<ob.multiplicationUnderModulo(a,b)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends