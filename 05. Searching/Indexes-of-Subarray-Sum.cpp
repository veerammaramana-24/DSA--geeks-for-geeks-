//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) 
    {
        // Your code here
        // Your code here
          int i=0;
        int j=0;
        // int k=0;
        long long sum=arr[j];
        while(i<=j and j<n){
            // if sum>Target
            if(sum>s){
                if(i==j){
                    i++;
                    j++;
                    sum=arr[j];
                }
                else{
                    sum-=arr[i];
                    i++;
                }
            }

            else if(sum<s){
                j++;
                sum+=arr[j];
            }
            else{
                break;
            }
        }
        if(i+1>n or j+1>n){
            return {-1};
        }
        return {i+1,j+1};
    
    }
};
//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends