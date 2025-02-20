//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    // arr[]: input array
    // n: size of array
    // x: element to find index
    //Function to find index of element x in the array if it is present.
    int closer(int arr[],int n, int x)
    {
        //Your code here
         int low = 0, high = n - 1;
    
        // Modified binary search
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
        
            // Check if the middle element or its neighbors are the target
            if (arr[mid] == x)
                return mid;
            if (mid + 1 <= high && arr[mid + 1] == x)
                return mid + 1;
            if (mid - 1 >= low && arr[mid - 1] == x)
                return mid - 1;
        
            // If x is smaller than arr[mid], search in the left half
            if (arr[mid] > x)
                high = mid - 2;
            // If x is greater than arr[mid], search in the right half
            else
                low = mid + 2;
        }
    
        // If the element is not found, return -1
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	  
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x;
	    cin >> x;
	    Solution obj;
	    int res = obj.closer(arr,n,x);
	    
	    cout << res << endl;
	
cout << "~" << "\n";
}
	
	return 0;
}
// } Driver Code Ends