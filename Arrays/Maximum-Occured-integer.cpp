//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
        vector<int>freq(maxx+2,0);
        for(int i=0;i<n;i++)
        {
            freq[l[i]]++;
            freq[r[i]+1]--;
        }
        int maxFreq=0,result=0;
        int currFreq=0;
        for(int i=0;i<=maxx;i++)
        {
            currFreq += freq[i];
            if(currFreq > maxFreq)
            {
                maxFreq = currFreq;
                result=i;
            }
        }
        return result;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    // taking testcases
    cin >> t;

    while (t--) {
        int n;

        // taking size of array
        cin >> n;
        int l[n];
        int r[n];

        // adding elements to array L
        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }

        int maxx = 0;

        // adding elements to array R
        for (int i = 0; i < n; i++) {

            cin >> r[i];
            if (r[i] > maxx) {
                maxx = r[i];
            }
        }
        Solution ob;

        // calling maxOccured() function
        cout << ob.maxOccured(n, l, r, maxx) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends