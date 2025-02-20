#include <iostream>
using namespace std;
class Solution{
  public:
    //Complete this function
    int RecursivePower(int n,int p)
    {
        // Base case: Any number raised to the power of 0 is 1
        if (p == 0)
        {
            return 1;
        }
        // Recursive case
        return n * RecursivePower(n, p - 1);//Your code here
    }
};
int main() {
	int T;
	cin>>T;//testcases
	while(T--)
	{
	    int n,p;
	    
	    //taking n and p as inputs
	    cin>>n>>p;
	    
	    //calling RecursivePower() function
	    Solution obj;
	    cout<<obj.RecursivePower(n,p)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends