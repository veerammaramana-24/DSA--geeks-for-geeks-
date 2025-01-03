#include <iostream>
using namespace std;
class Solution
{
    public:
    //Complete this function
    void printNos(int n)
    {
        if(n==0)
            return;
        else
            printNos(n-1);
            cout<<n<<" ";
    }
};
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends