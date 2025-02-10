//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) 
    {
      // Your code here
      int low = 0, high = N - 1;
    
        // Perform binary search
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;  // To avoid overflow
        
            // Check if the element is present at mid
            if (arr[mid] == K) 
            {
                return 1;  // Element found
            }
            // If K is smaller, search in the left half
            else if (arr[mid] > K)
            {
                high = mid - 1;
            }
            // If K is larger, search in the right half
            else
            {
                low = mid + 1;
            }
        }
    
        // Element not found
        return -1;
        
    }
};
//{ Driver Code Starts.

int main(void) {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << (ob.searchInSorted(arr, k) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends