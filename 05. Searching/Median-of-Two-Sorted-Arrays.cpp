//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
//User function template for C++


class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int findMedian(int arr[], int n, int brr[], int m)
    {
        // code here
        
        // Ensure that arr[] is the smaller array
        if (n > m) 
        {
            return findMedian(arr,n,brr,m);
        }

        int low = 0, high = n;
        int total = n + m;

        while (low <= high)
        {
            int partitionX = (low + high) / 2;
            int partitionY = (total + 1) / 2 - partitionX;

            // Handling edge cases with -infinity and +infinity when the partitions are out of bounds
            int maxX = (partitionX == 0) ? INT_MIN : arr[partitionX - 1];
            int minX = (partitionX == n) ? INT_MAX : arr[partitionX];

            int maxY = (partitionY == 0) ? INT_MIN : brr[partitionY - 1];
            int minY = (partitionY == m) ? INT_MAX : brr[partitionY];

            // Check if we have found the correct partition
            if (maxX <= minY && maxY <= minX)
            {
                // If the total number of elements is odd
                if (total % 2 == 1)
                {
                    return max(maxX, maxY);
                }
                else 
                {
                    // If the total number of elements is even
                    return (double)(max(maxX, maxY) + min(minX, minY)) / 2;
                }
            }
            else if (maxX > minY)
            {
                // Move towards the left in arr
                high = partitionX - 1;
            }
            else 
            {
                // Move towards the right in arr
                low = partitionX + 1;
            }
        }

        // If we reach here, there is some issue with the input arrays
        throw invalid_argument("Input arrays are not sorted.");
    }
};
//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;
	    
	
cout << "~" << "\n";
}

}
// } Driver Code Ends