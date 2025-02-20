//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};
class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    // Keypad mapping
    const vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void findWords(vector<int> &a, int N, string current, int index, vector<string> &result)
    {
        if (index == N)
        {
            result.push_back(current);
            return;
        }
    
        string letters = keypad[a[index]];
        for (char letter : letters) 
        {
            findWords(a, N, current + letter, index + 1, result);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<int> digits(a, a + N);
        vector<string> result;
        findWords(digits, N, "", 0, result);
        return result;
    }
};
int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        vector<string> v = obj.possibleWords(a);

        Array::print(v);
        cout << "~" << endl;
    }
}

// } Driver Code Ends