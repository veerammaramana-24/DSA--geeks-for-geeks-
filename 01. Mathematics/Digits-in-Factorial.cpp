//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        if (N < 0) 
        {
            throw std::invalid_argument("N must be a non-negative integer");
        }
        if (N < 2) 
        {
            return 1;
        }
        double digits = 0;
        for (int i = 2; i <= N; i++)
        {
            digits += log10(i);
        }
        return floor(digits) + 1;

        // code here
    }
};//{ Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends