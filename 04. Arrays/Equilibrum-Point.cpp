//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
        int n = arr.size();
        for(int i= 1;i<n;++i) {
            arr[i] += arr[i-1];
        }
        int ans = -1;
        for(int i=0;i<n;++i) {
            if(i == 0 && arr[n-1] - arr[i] == 0) {
                ans = i+1;
                break;
            } else if(arr[i-1] == arr[n-1] - arr[i]) {
                ans = i+1;
                break;
            }
        }
        return ans;

    }
};
//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends