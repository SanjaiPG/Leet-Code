class Solution
{
public:
    int numOfWays(int n)
    {

        const int MOD = 1e9 + 7;

        long long A = 6;
        long long B = 6;

        for (int i = 2; i <= n; i++)
        {
            long long newA = (A * 3 + B * 2) % MOD;
            long long newB = (A * 2 + B * 2) % MOD;
            A = newA;
            B = newB;
        }

        return (A + B) % MOD;
    }
};