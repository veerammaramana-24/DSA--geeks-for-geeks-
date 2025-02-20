//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
    public:
    
    //You need to complete this function
    double cToF(int c)
    {
        double f=(1.8)*c+32;
        return f;//Your code here
    }
};
//{ Driver Code Starts.







int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        Solution ob;
        cout << floor(ob.cToF(C)) << endl; //print the output
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends