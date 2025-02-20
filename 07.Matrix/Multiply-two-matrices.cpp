//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
         int n1 = A.size();
        int m1 = A[0].size();
        int n2 = B.size();
        int m2 = B[0].size();
    
        // Check if multiplication is possible
        if (m1 != n2)
        {
            return {}; // Return an empty matrix
        }
    
        // Initialize the result matrix with zeros
        vector<vector<int>> result(n1, std::vector<int>(m2, 0));
    
        // Perform matrix multiplication
        for (int i = 0; i < n1; ++i)
        {
            for (int j = 0; j < m2; ++j) 
            {
                for (int k = 0; k < m1; ++k)
                {
                    result[i][j] += A[i][k] * B[k][j];
                }
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

        int mat1[4][4]; // Define a 2D array for matrix A
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> mat1[i][j];
            }
        }

        int mat2[4][4]; // Define a 2D array for matrix B
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> mat2[i][j];
            }
        }

        Solution ob;
        int result[4][4]; // Define a 2D array for the result matrix
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> result[i][j];
            }
        }
        bool isValid = ob.multiplyMatrix(mat1, mat2, result);

        if (!isValid) {
            cout << "False\n";
        } else {
            cout << "True\n";
        }
    }
    return 0;
}

// } Driver Code Ends