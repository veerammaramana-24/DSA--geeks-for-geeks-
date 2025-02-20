//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
// Function to find element in sorted array

// Function to find element in sorted array

int leftIndex(int N, int arr[], int x){
    
    int low = 0, high = N - 1;
    int result = -1;  // Initialize result as -1, which means not found
    
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate mid to avoid overflow
        
        if (arr[mid] == x) {
            result = mid;  // Update result to current index
            high = mid - 1;  // Continue to search in the left half to find the leftmost occurrence
        }
        else if (arr[mid] > x) {
            high = mid - 1;  // Move to the left half
        }
        else {
            low = mid + 1;  // Move to the right half
        }
    }
    
    return result;// Your code here
    
}




//{ Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    int elemntToSearch;
	    cin >> elemntToSearch;
	    
	    cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
	
cout << "~" << "\n";
}
	
	return 0;
}
// } Driver Code Ends