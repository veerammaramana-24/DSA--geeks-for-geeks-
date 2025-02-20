//{ Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here
        bool swapped;
    
        for (int i = 0; i < n - 1; ++i) 
        {
            swapped = false;
        
            for (int j = 0; j < n - i - 1; ++j)
            {
                if (arr[j] > arr[j + 1]) 
                {
                    // Swap arr[j] and arr[j + 1]
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
        
            // If no two elements were swapped in the inner loop, then the array is sorted
            if (!swapped) 
            {
                break;
            }
        }
    }
};//{ Driver Code Starts.

// Driver program to test above functions
int main() {

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

        ob.bubbleSort(arr);
        for (int e : arr) {
            cout << e << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends