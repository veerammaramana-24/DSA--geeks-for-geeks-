//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int> arr) 
    {
        // Your code here
         int n = arr.size();
        if (n == 0) return 0;
    
        int max_length = 0;
        int current_length = 0;
    
        for (int i = 1; i < n; ++i)
        {
            if (arr[i] > arr[i - 1])
            {
                ++current_length;
            }
            else
            {
                max_length = max(max_length, current_length);
                current_length = 0; // Reset length for the new sequence
            }
        }
    
        // Final check to handle the case where the longest sequence ends at the last element
        max_length = max(max_length, current_length);
    
        return max_length;

    }
};//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.maxStep(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends