#include <iostream>
#include <vector>
using namespace std;

class Soltuion
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> outputSum;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums.at(i) + nums.at(j) == target)
                {
                    outputSum.push_back(i);
                    outputSum.push_back(j);
                    break;
                }
            }
        }
        return outputSum;
    }
};

int main()
{
    Soltuion sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    for (int i : result)
        cout << result.at(i) << " ";
    return 0;
}