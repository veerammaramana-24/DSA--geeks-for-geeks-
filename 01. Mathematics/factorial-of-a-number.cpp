//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
long long factorial(int);

// } Driver Code Ends
// User function Template for C++
// User function Template for C++

class Solution{
    public:
        // Complete this function
    long long factorial(int n) 
    {
        if(n==0 || n==1)
        {
            return 1;
        }
        return n*factorial(n-1);
        // Your code here
    }

};
//{ Driver Code Starts.
int main() {
    int T, N;
    cin >> T; // input number of testcases
    while (T--) {
        cin >> N; // input n
        Solution ob;
        cout << ob.factorial(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends