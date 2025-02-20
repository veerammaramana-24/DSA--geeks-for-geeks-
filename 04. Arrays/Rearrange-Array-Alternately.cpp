//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
        int max_idx = n - 1; // Index of the maximum element
        int min_idx = 0;     // Index of the minimum element
    int max_elem = arr[max_idx] + 1; // Store a number greater than the maximum element in the array

    // Traverse the array and modify the elements
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Even index: Place the maximum element
            arr[i] += (arr[max_idx] % max_elem) * max_elem;
            max_idx--;
        } else {
            // Odd index: Place the minimum element
            arr[i] += (arr[min_idx] % max_elem) * max_elem;
            min_idx++;
        }
    }

    // Decode the new values
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / max_elem;
    }
    	
    	// Your code here
    	 
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
        Solution obj;
        obj.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends