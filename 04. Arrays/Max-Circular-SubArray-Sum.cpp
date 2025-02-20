//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int normalMaxSum(int arr[], int num)
    {
	    int res = arr[0];

	    int maxEnding = arr[0];

	    for(int i = 1; i < num; i++)
	    {
		    maxEnding = max(maxEnding + arr[i], arr[i]);

		    res = max(maxEnding, res);
	    }
	
	    return res;
    }
    int circularSubarraySum(int arr[], int num)
    {
	    int max_normal = normalMaxSum(arr, num);

	    if(max_normal < 0)
		    return max_normal;

	    int arr_sum = 0;

	    for(int i = 0; i < num; i++)
	    {
		    arr_sum += arr[i];

		    arr[i] = -arr[i];
	    }

	    int max_circular = arr_sum + normalMaxSum(arr, num);

	    return max(max_circular, max_normal);
        
        // your code here
    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends