class Solution
{
public:
    long long maxMatrixSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        long long totalSum = 0;
        int negCount = 0;
        int minAbs = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int val = matrix[i][j];
                totalSum += llabs(val);

                if (val < 0)
                    negCount++;

                minAbs = min(minAbs, abs(val));
            }
        }

        if (negCount % 2 == 1)
        {
            totalSum -= 2LL * minAbs;
        }

        return totalSum;
    }
};