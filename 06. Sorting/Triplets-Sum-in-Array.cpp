//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) 
    {
        // Your Code Here
        // Sort the array to apply two-pointer technique
        sort(arr, arr + n);

        // Iterate over each element to fix one element of the triplet
        for (int i = 0; i < n - 2; i++)
        {
            int low = i + 1;     // Pointer to the element after arr[i]
            int high = n - 1;    // Pointer to the last element

            // Use two-pointer technique to find a pair such that
            // arr[i] + arr[low] + arr[high] == x
            while (low < high)
            {
                int sum = arr[i] + arr[low] + arr[high];
                if (sum == x) 
                {
                    return true; // Triplet found
                }
                else if (sum < x)
                {
                    low++; // Increase sum by moving low pointer right
                }
                else
                {
                    high--; // Decrease sum by moving high pointer left
                }
            }
        }

        return false; // No triplet found
    }
};
//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        bool result = solution.hasTripletSum(arr, target);
        cout << (result ? "true" : "false") << "\n";
    }

    return 0;
}
// } Driver Code Ends