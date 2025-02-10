//{ Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int height[], int N) 
    { 
        //Your code here
        if (N < 2) 
        {
            return 0; // Not enough buildings to trap any water
        }
    
        int left = 0;
        int right = N - 1;
        int maxWater = 0;
    
        while (left < right)
        {
            int minHeight = min(height[left], height[right]);
            int distance = right - left - 1; // Number of buildings removed
            maxWater = max(maxWater, minHeight * distance);
        
            // Move the pointer pointing to the shorter building
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxWater;
    } 
};



//{ Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        Solution ob;
        cout<<(ob.maxWater(height, n))<<endl;
    
cout << "~" << "\n";
}

	 
} 


// } Driver Code Ends