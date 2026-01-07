class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int length = s.size();
        vector<char> arr(length);
        for (int i = length; i > 0; i--)
        {
            arr[length - i] = s[i - 1];
        }

        for (int i = 0; i < length; i++)
        {
            s[i] = arr[i];
        }
    }
};