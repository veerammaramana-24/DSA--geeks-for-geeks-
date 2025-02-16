//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        //your code here
        //If median is in fraction then convert it to integer and return
        sort(a,a+n);
         if(n%2==0)
         {
            return (a[(n-1)/2]+a[n/2])/2;
        }
        else
        {
            return a[(n-1)/2];
        }
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        return sum/n;
    }
};


//{ Driver Code Starts.

int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        
        //inseting elements in the array
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        Solution ob;
        //calling mean() and median() functions
        cout<<ob.mean(a,N)<<" "<<ob.median(a,N)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends