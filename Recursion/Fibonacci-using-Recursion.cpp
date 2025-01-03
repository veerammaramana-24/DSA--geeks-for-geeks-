#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Complete this function
    int fibonacci(int n)
    {
        //Your code here
        if(n<=1)
            return n;
        else
            return fibonacci(n-1)+fibonacci(n-2); 

    }
};

//{ Driver Code Starts.
int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	while (T--)
	{
	    int n;
	    //taking number n
	    cin>>n;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.fibonacci(n)<<endl;
	    
	    
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends