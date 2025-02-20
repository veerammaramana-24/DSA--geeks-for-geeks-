//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) 
    {
        // code here
        vector<int> result;
        if (matrix.empty()) return result;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int top = 0, bottom = rows - 1;
        int left = 0, right = cols - 1;

        while (top <= bottom && left <= right)
        {
            // Traverse from left to right along the top row
            for (int i = left; i <= right; ++i) 
            {
                result.push_back(matrix[top][i]);
            }
            ++top;

            // Traverse from top to bottom along the right column
            for (int i = top; i <= bottom; ++i) 
            {
                result.push_back(matrix[i][right]);
            }
            --right;

            // Check if there are remaining rows to process
            if (top <= bottom)
            {
                // Traverse from right to left along the bottom row
                for (int i = right; i >= left; --i) 
                {
                    result.push_back(matrix[bottom][i]);
                }
                --bottom;
            }

            // Check if there are remaining columns to process
            if (left <= right) 
            {
                // Traverse from bottom to top along the left column
                for (int i = bottom; i >= top; --i) 
                {
                    result.push_back(matrix[i][left]);
                }
                ++left;
            }
        }

        return result;
    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends