//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends




class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > &matrix, int n, int m, int x) 
    {
        // code here
        int row = 0;
        int col = m - 1;

        while (row < n && col >= 0)
        {
            if (matrix[row][col] == x) 
            {
                return true;
            }
            else if (matrix[row][col] > x)
            {
                col--;  // Move left
            }
            else
            {
                row++;  // Move down
            }
        }

        return false;

    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends