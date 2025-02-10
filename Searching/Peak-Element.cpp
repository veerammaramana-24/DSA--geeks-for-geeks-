//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
        int low = 0;
        int high = n - 1;
    
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
        
            // Check if mid is a peak element
            if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid] >= arr[mid + 1])) 
            {
                return mid;
            }
        
            // If the right neighbor is greater, then the peak must be in the right half
            if (mid < n - 1 && arr[mid] < arr[mid + 1]) 
            {
                low = mid + 1;
            }
            else
            { // Otherwise, the peak must be in the left half
                high = mid - 1;
            }
        }
    
        // This point should not be reached with valid input
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int idx = ob.peakElement(a);
        int n = a.size();
        bool f = 0;
        if (idx < 0 and idx >= n)
            cout << "false" << endl;
        else {
            if (n == 1 and idx == 0)
                f = 1;
            else if (idx == 0 and a[0] > a[1])
                f = 1;
            else if (idx == n - 1 and a[n - 1] > a[n - 2])
                f = 1;
            else if (a[idx] > a[idx + 1] and a[idx] > a[idx - 1])
                f = 1;
            else
                f = 0;
            if (f)
                cout << "true" << endl;
            else
                cout << "false" << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends