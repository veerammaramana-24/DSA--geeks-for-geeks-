//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int N) 
    { 
        // Your code here

        // Step 1: Place each number in its correct index
        for(int i = 0; i < N; ++i)
        {
            while (arr[i] > 0 && arr[i] <= N && arr[i] != arr[arr[i] - 1])
            {
                swap(arr[i], arr[arr[i] - 1]);
            }
        }

        // Step 2: Find the first index where the number is not correct
        for (int i = 0; i < N; ++i) 
        {
            if (arr[i] != i + 1) 
            {
                return i + 1;
            }
        }

        // If all numbers from 1 to N are present, the missing number is N+1
        return N + 1;
    } 
};
//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main() {

    // taking testcases
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

        Solution ob;
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
    return 0;
}
// } Driver Code Ends