#include <iostream>
using namespace std;
//User function Template for C++
class Solution{
  public:
    //Complete this function
    int countDigits(int n)
    {
       int count = 0;
        while (n > 0) 
        {
            count++;
            n /= 10; // Remove the last digit
        }
        return count;
    }
};
int main() {
    int T;

    // taking testcases
    cin >> T;
    while (T--) {
        int n;

        // taking number n
        cin >> n;

        // calling countDigits
        Solution obj;
        cout << obj.countDigits(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends