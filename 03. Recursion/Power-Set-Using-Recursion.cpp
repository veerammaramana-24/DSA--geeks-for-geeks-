// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;
//Function to return the lexicographically sorted power-set of the string.
vector <string> powerSet(string s)
{
   vector<string> result;
    int n = s.size();
    int powerSetSize = 1 << n; // 2^n

    for (int i = 0; i < powerSetSize; ++i) 
    {
        string subset;
        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
            {
                subset += s[j];
            }
        }
        result.push_back(subset);
    }

    sort(result.begin(), result.end()); // Lexicographic order

    return result;//Your code here
}
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    
cout << "~" << "\n";
}

return 0;
} 
// } Driver Code Ends