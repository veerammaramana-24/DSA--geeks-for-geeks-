//User function Template for C++
#include <iostream>
using namespace std;
class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n)
    {  
        if(n<9)
        {
          return n;
        }
        int sum=0;
        sum=sum+n%10;
        return sum+(sumOfDigits(n/10));
           
          //Your code here
    }
};
int main() 
{
	int T;
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking input n
	    cin>>n;
	    
	    //calling method sumOfDigits()
	    Solution obj;
	    cout<<obj.sumOfDigits(n)<<endl;
	    cout << "~" << "\n";
    }
	return 0;
}
