#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max_sum = INT_MIN;
        int cur_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            cur_sum = cur_sum + nums.at(i);
            max_sum = max(cur_sum, max_sum);
            if (cur_sum < 0)
            {
                cur_sum = 0;
            }
        }
        return max_sum;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << sol.maxSubArray(nums);
    return 0;
}