#include <iostream>
using namespace std;
class Solution
{
    public:
    //You need to complete this fucntion
    // Define the modulo constant
    const long long MOD = 1000000007;
    
    // Function to compute the reverse of a number
    long long reverseNumber(long long num)
    {
        long long rev_num = 0;
        while (num > 0)
        {
            rev_num = rev_num * 10 + num % 10;
            num /= 10;
        }
        return rev_num;
    }
    // Function to perform modular exponentiation
    long long power(long long N, long long R)
    {
        long long result = 1;
        N = N % MOD;
        while (R > 0)
        {
            if (R % 2 == 1)
            {  // If R is odd, multiply N with result
                result = (result * N) % MOD;
            }
            R = R >> 1;       // R = R / 2
            N = (N * N) % MOD; // Change N to N^2
        }
        return result;
    }
    // Function to be completed
    long long pow(int N, int R) 
    {
    return power(N, R);
    }
};
// Main function for testing
int main() 
{
    int N = 12;
    int R = reverseNumber(N);
    cout << pow(N, R) << endl;
    N = 2;
    R = reverseNumber(N);
    cout << pow(N, R) << endl;
    return 0;
};