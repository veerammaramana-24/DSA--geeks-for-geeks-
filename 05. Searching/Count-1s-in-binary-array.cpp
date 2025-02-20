//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        
        // Your code here
        int left = 0;
    int right = N - 1;

    // Perform binary search to find the first occurrence of 0
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == 0) 
        {
            // We need to search in the left half
            right = mid - 1;
        } 
        else
        {
            // We need to search in the right half
            left = mid + 1;
        }
    }

    // After the loop, left will be at the position of the first 0 or N
    // Count of 1s will be the index of the first 0
    return left;

        
    }
};
//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends