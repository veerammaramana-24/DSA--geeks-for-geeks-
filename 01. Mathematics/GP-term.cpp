//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
       double commonRatio = (double)B / A;
       return A * pow(commonRatio, N - 1); //Your code here
    }
};
//{ Driver Code Starts.


int main()
{
    int T; //testcases total
    cin>>T;//input the testcases

    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        Solution ob;
        cout<<floor(ob.termOfGP(A,B,N))<<endl;
    
cout << "~" << "\n";
}

    return 0;
}


// } Driver Code Ends