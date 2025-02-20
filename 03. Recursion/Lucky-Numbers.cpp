#include <bits/stdc++.h>
using namespace std;
// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False
class Solution
{
    public:
    bool check(int n,int counter)
    {
        if(counter>n)
        {
         return true;   
        }
        else
        {
            if(n%counter==0)\
            {
                return false;
            }
            n=n-(n/counter);
            counter++;
            return check(n,counter);
        }
            
    }
    bool isLucky(int n) 
    {
        return check(n,2);
        // code here
    }
};
signed main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        Solution obj;
        //calling isLucky() function
        if(obj.isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    
        cout << "~" << "\n";
    }
}
