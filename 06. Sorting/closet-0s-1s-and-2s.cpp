//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    // The function should do the stated modifications in the given array arr[]
    // Do not return anything.
    
    // arr[]: Input Array
    // N: Size of the Array arr[]
    //Function to segregate 0s, 1s and 2s in sorted increasing order.
    void segragate012(int arr[], int n)
    {
        // Your Code Here
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high) 
        {
            if (arr[mid] == 0)
            {
                // Swap arr[mid] with arr[low]
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                // Swap arr[mid] with arr[high]
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};
//{ Driver Code Starts.
int main() {

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin >> A[i];
        }

        Solution ob;
        ob.segragate012(A, N);

        for(int i=0;i<N;i++){
            cout << A[i]  << " ";
        }

        cout << endl;
        
        
    
cout << "~" << "\n";
}

}

// } Driver Code Ends