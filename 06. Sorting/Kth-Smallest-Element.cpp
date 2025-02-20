//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
        // Create a max heap (priority queue in C++ with greater<int>)
        priority_queue<int> maxHeap;
    
        // Iterate through the array
        for (int i = 0; i < n; i++)
        {
            // Insert the current element into the max heap
            maxHeap.push(arr[i]);
        
            // If the heap size exceeds k, remove the largest element (root of the max heap)
            if (maxHeap.size() > k)
            {
                maxHeap.pop();
            }
        }
    
        // The root of the max heap is the kth smallest element
        return maxHeap.top();
    }
};
//{ Driver Code Starts.
int main(){
	
	int t;
	cin >> t;
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    
	    for(int i = 0; i<n; ++i)
	        cin>>arr[i];
	        
	    Solution ob;
	    cout << ob.kthSmallest(arr, n, k) << endl;
	    
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends