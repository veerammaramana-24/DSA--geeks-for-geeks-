//{ Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
    public:
    //Complete this function
    int modInverse(int a, int m)
    {
        for (int i = 1; i < m; i++) 
        {
            if ((a * i) % m == 1) 
            {
                return i;
            }
        }
        return -1;
//Your code here
    }
};
//{ Driver Code Starts.

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		Solution ob;
		//calling function modInverse()
		cout << ob.modInverse(a, m)<<endl;
	
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends