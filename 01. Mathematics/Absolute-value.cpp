//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution{
    public:
        int absolute(int I) {
             return (I < 0) ? -I : I;
// Your code goes here
    }

};
//{ Driver Code Starts.

int main() {
    int T;    // number of testcases
    cin >> T; // input number of testcases
    while (T--) {
        int I;
        cin >> I;
        Solution ob;
        cout << ob.absolute(I) << endl; // print the output
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends