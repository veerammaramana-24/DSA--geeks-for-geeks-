//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

// } Driver Code Ends
class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code here
        int i = 0, j = 0, k = 0;
        int N = A.size(), M = B.size(), P = C.size();
        vector<int> result;

        // Traverse through all arrays
        while (i < N || j < M || k < P) 
        {
            int a = (i < N) ? A[i] : INT_MAX;
            int b = (j < M) ? B[j] : INT_MAX;
            int c = (k < P) ? C[k] : INT_MAX;

            if (a <= b && a <= c) 
            {
                result.push_back(a);
                i++;
            }
            else if (b <= a && b <= c)
            {
                result.push_back(b);
                j++;
            }
            else
            {
                result.push_back(c);
                k++;
            }
        } 
        return result;
    }

};//{ Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    
cout << "~" << "\n";
}
   
    return 0; 
} 

// } Driver Code Ends