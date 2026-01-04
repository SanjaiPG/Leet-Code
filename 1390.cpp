class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int arr[4];
            int divisor = 0;
            for (int j = 1; j < nums[i]; j++)
            {
                if (nums[i] % j == 0)
                {
                    arr[divisor] = j;
                    divisor++;
                    if (divisor >= 4)
                        break;
                }
            }

            if (divisor == 3)
            {
                arr[divisor] = nums[i];
                divisor++;
                for (int j = 0; j < divisor; j++)
                {
                    sum += arr[j];
                }
            }
        }
        return sum;
    }
};
