//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

                                            
class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int N)
    {
        // code here 
        vector<int> rowSum(N, 0);
    vector<int> colSum(N, 0);
    
    // Calculate row sums and column sums
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    
    // Find the maximum row sum and column sum
    int maxRowSum = *max_element(rowSum.begin(), rowSum.end());
    int maxColSum = *max_element(colSum.begin(), colSum.end());
    int targetSum = max(maxRowSum, maxColSum);
    
    // Calculate total operations required for rows
    int operations = 0;
    for (int i = 0; i < N; ++i) {
        operations += targetSum - rowSum[i];
    }
    
    // Verify the solution
    // Note: No need to adjust column sums separately if row operations are correctly accounted
    return operations;

    } 
};//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > matrix(n, vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        Solution ob;
        cout << ob.findMinOperation(matrix) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends