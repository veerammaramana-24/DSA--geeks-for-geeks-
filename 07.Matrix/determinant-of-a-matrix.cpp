//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends




class Solution
{   
    public:
    //Function for finding determinant of matrix.
    vector<vector<int>> getCofactor(vector<vector<int>>& mat, int p, int q, int n)
    {
        vector<vector<int>> temp(n - 1, vector<int>(n - 1));
        int i = 0, j = 0;
    
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                if (row != p && col != q) {
                    temp[i][j++] = mat[row][col];
                    if (j == n - 1) {
                        j = 0;
                        i++;
                    }
                }
            }
        }
        return temp;
    }
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        // code here
        if (n == 1)
        return matrix[0][0];
        if (n == 2)
            return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    
        int determinant = 0;
        int sign = 1;
    
        for (int i = 0; i < n; i++)
        {
            vector<vector<int>> cofactor = getCofactor(matrix, 0, i, n);
            determinant += sign * matrix[0][i] * determinantOfMatrix(cofactor, n - 1);
            sign = -sign; // Alternate signs
        }
    
        return determinant;
    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        int result = ob.determinantOfMatrix(matrix, n);
        cout<<result<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends