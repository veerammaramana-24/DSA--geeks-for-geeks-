//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(const vector<int>& arr) {
    for (int num : arr)
        printf("%d ", num);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if (low < high) 
        {
            // Partition the array around the pivot
            int pi = partition(arr, low, high);

            // Recursively sort the elements before and after the pivot
            quickSort(arr, low, pi - 1);  // Sort the left subarray
            quickSort(arr, pi + 1, high); // Sort the right subarray
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
        int pivot = arr[high];  // Choose the last element as pivot
        int i = low - 1;        // Index of the smaller element

        for (int j = low; j <= high - 1; j++) 
        {
            // If current element is smaller than or equal to pivot
            if (arr[j] <= pivot)
            {
                i++;    // Increment index of the smaller element
                swap(arr[i], arr[j]);
            }
        }

        // Swap the pivot element with the element at index i+1
        swap(arr[i + 1], arr[high]);
        return (i + 1);  // Return the index of the pivot
    }
};//{ Driver Code Starts.

int main() {

    int T;
    scanf("%d", &T);
    getchar(); // to consume newline after T

    while (T--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.quickSort(arr, 0, arr.size() - 1);
        printArray(arr);
    }

    return 0;
}

// } Driver Code Ends