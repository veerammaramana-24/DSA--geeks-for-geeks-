//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) 
    {
        int determinant = b * b - 4 * a * c;
        if (determinant < 0)
        {
            return {-1};  // Imaginary roots
        }
        else 
        {
            int root1 = floor((-b + sqrt(determinant)) / (2 * a));
            int root2 = floor((-b - sqrt(determinant)) / (2 * a));
            return {std::max(root1, root2), std::min(root1, root2)};
        }
 // code here
    }
};//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends