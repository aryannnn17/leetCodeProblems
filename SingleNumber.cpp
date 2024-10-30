#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        // sort(nums.begin(),nums.end());
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans ^ nums.at(i);
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << sol.singleNumber(nums);
    return 0;
}