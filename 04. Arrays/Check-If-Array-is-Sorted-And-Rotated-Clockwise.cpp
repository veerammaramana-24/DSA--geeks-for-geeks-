//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int num)
    {
        // Your code here
        int incCount = 0; // Count for increasing order violations
        int decCount = 0; // Count for decreasing order violations
    
        for (int i = 0; i < num; i++) 
        {
            if (arr[i] > arr[(i + 1) % num])
            {
                incCount++;
            }
            if (arr[i] < arr[(i + 1) % num]) 
            {
                decCount++;
            }
        }
    
        return (incCount == 1 ||decCount==1);    
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	//testcases
	cin>> T;
	
	while (T--){
	    int num;
	    //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        Solution ob;
        
        //function call
        flag = ob.checkRotatedAndSorted(arr, num);
        
        //printing "No" if not sorted and
        //rotated else "Yes"
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	
cout << "~" << "\n";
}
	
	return 0;
}
// } Driver Code Ends