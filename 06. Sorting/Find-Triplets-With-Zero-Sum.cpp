//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr, arr + n);
    
        // Iterate over the array
        for (int i = 0; i < n - 2; i++) 
        {
            int left = i + 1;       // Left pointer
            int right = n - 1;      // Right pointer
        
            while (left < right)
            {
                int sum = arr[i] + arr[left] + arr[right];
            
                if (sum == 0)
                {
                    return true;    // Triplet found
                }
                else if (sum < 0)
                {
                    left++;         // Move left pointer to increase the sum
                }
                else 
                {
                    right--;        // Move right pointer to decrease the sum
                }
            }
        }
    
        // No triplet found
        return false;

    }
};
//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        if (obj.findTriplets(arr))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    return 0;
}

// } Driver Code Ends