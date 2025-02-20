//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        //code here
        sort(arr, arr + n);
    
        // Initialize minimum difference as a large value
        int minDiff = INT_MAX;
    
        // Iterate through the sorted array and compute differences
        for (int i = 1; i < n; i++) 
        {
            // Calculate the difference between consecutive elements
            int diff = arr[i] - arr[i - 1];
        
            // Update the minimum difference
            minDiff = min(minDiff, diff);
        }
    
        // Return the minimum difference
        return minDiff;
    }
};
//{ Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n]; 
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int diff = ob.MinimumDifference(arr, n);
	    cout << diff << endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends