//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int>ans;// code here
        int sr=0,er=n-1,sc=0,ec=m-1;
        for(int i=0;i<m;i++)
        {
          ans.push_back(matrix[sr][i]);  
        }
        for(int i=1;i<n;i++)
        {
            ans.push_back(matrix[i][ec]);
        }
        if(sr<er)
        {
          for(int i=m-2;i>=0;i--)
          {
              ans.push_back(matrix[er][i]);
          }
        }
        if(sc<ec)
        {
          for(int i=n-2;i>0;i--)
          {
              ans.push_back(matrix[i][sc]);
          }
        }
        return ans;
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

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends