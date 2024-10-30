#include <bits/stdc++.h>
using namespace std;

bool compare(string &a, string &b)
{
    return a + b > b + a;
}
class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        string larNum = "aa";
        larNum.clear();
        vector<string> temp;
        for (auto i : nums)
        {
            temp.push_back(to_string(i));
        }
        sort(temp.begin(), temp.end(), compare);
        if (temp[0] == "0")
        {
            return "0";
        }
        for (string i : temp)
        {
            cout << i << " ";
            larNum += i;
        }

        return larNum;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {3, 30, 64, 5, 9};
    cout << sol.largestNumber(nums);
    return 0;
}