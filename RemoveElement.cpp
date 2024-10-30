#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        // vector<int> ans;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (val == nums.at(i))
            {
                ans++;
            }
        }
        return nums.size() - ans;
    }
};
int main()
{
    Solution sol;
    vector<int> arr = {3, 2, 2, 3};
    int num = 3;
    cout << sol.removeElement(arr, num);
    return 0;
}