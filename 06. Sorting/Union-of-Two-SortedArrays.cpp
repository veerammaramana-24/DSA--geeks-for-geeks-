//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> result;
        int i = 0, j = 0;

        // Traverse both arrays using two pointers
        while (i < n && j < m)
        {
            // Skip duplicates in arr1
            if (i > 0 && arr1[i] == arr1[i - 1])
            {
                i++;
                continue;
            }
            // Skip duplicates in arr2
            if (j > 0 && arr2[j] == arr2[j - 1])
            {
                j++;
                continue;
            }

            if (arr1[i] < arr2[j])
            {
                result.push_back(arr1[i]);
                i++;
            }
            else if (arr2[j] < arr1[i])
            {
                result.push_back(arr2[j]);
                j++;
            }
            else
            {
                // Both are equal
                result.push_back(arr1[i]);
                i++;
                j++;
            }
        }

        // Add remaining elements from arr1
        while (i < n)
        {
            if (i == 0 || arr1[i] != arr1[i - 1])
            {
                result.push_back(arr1[i]);
            }
            i++;
        }

        // Add remaining elements from arr2
        while (j < m) 
        {
            if (j == 0 || arr2[j] != arr2[j - 1]) 
            {
                result.push_back(arr2[j]);
            }
            j++;
        }

        return result;
    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends