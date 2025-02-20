//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr)
    {
        // code here
        // Size of the alphabet
        const int ALPHABET_SIZE = 26;
    
        // Initialize the count array
        vector<int> count(ALPHABET_SIZE, 0);
    
        // Count the frequency of each character
        for (char c : arr) 
        {
            count[c - 'a']++;
        }
    
        // Construct the sorted string
        string result;
        for (int i = 0; i < ALPHABET_SIZE; i++) 
        {
            result += string(count[i], 'a' + i);
        }
    
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends