#include <iostream>
using namespace std;
class Solution
{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        while (n >= 10)
        {
            int sum = 0;
            while (n > 0)
            {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
        return n;//Your code here
    }
};
int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	    
	    
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends