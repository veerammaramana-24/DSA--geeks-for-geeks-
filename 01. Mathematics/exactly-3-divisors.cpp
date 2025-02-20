//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int N)
    {
        int count = 0;
    for (int i = 2; i * i <= N; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
   }

    int isPrime(int N) {
    if (N <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;

        //Your code here
    }
};
//{ Driver Code Starts.


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
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends