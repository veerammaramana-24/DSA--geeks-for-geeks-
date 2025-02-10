//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) 
    {
       // Your code here
        int low = 0, high = n - 1;
        int floorIndex = -1;  // Initialize with -1, which is returned if no floor is found
    
        while (low <= high)
        {
            int mid = low + (high - low) / 2;  // Calculate mid to avoid overflow
        
        if (v[mid] <= x)
        {
            floorIndex = mid;  // This is a potential floor
            low = mid + 1;     // Move to the right half to find a larger floor
        }
        else
        {
            high = mid - 1;    // Move to the left half if arr[mid] is greater than x
        }
    }
    
    return floorIndex;  // Return the index of the largest element <= x, or -1 if not found
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends