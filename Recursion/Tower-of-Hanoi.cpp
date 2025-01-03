#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int from, int to, int aux)
    {
        // Base case: if there's no disk to move
        if (n == 0)
        {
            return 0;
        }

        int moves = 0;

        // Move n-1 disks from 'from' rod to 'aux' rod using 'to' as auxiliary
        moves += toh(n - 1, from, aux, to);

        // Move nth disk from 'from' rod to 'to' rod
        cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
        moves++;

        // Move n-1 disks from 'aux' rod to 'to' rod using 'from' as auxiliary
        moves += toh(n - 1, aux, to, from);

        return moves;
        // Your code here
    }
};
int main()
{
    int T;
    cin >> T; // testcases
    while (T--) {

        int N;
        cin >> N; // taking input N

        // calling toh() function
        Solution ob;

        cout << ob.towerOfHanoi(N, 1, 3, 2) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends