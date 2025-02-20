#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
       if (n == 1)
            return 1; // Base case: the last remaining person is at position 0
        else
            // Recurrence relation: adjust by k and mod by n
            return (josephus(n - 1, k) + k-1) % n+1;
    }
};
int main() {

    int t;
    cin >> t; // testcases
    while (t--) {
        int n, k;
        cin >> n >> k; // taking input n and k

        // calling josephus() function
        Solution ob;
        cout << ob.josephus(n, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends