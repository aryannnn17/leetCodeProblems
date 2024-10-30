#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int midPoint = nums.size() / 2;
        int midNum = nums[midPoint];
        if (target >w midNum)
        {
            for (int i  = midPoint; i < nums.size() - 1; i++)
            {
                if (nums[i] > target && nums[i + 1] <= target)
                {
                    return i+1;
                }
                // else
                // {
                //     return nums.size();
                // }
            }
        }
        else
        {
            for (int i = 0; i < midPoint; i++)
            {
                if (nums[i] > target && nums[i + 1] <= target)
                {
                    return i+1;
                }
                // else
                // {
                //     return midPoint;
                // }
            }
        }
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 6};
    int target = 5;
    cout << sol.searchInsert(nums, target);
    return 0;
}