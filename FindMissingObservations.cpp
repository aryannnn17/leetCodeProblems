#include <bits/stdc++.h>
#include <random>
using namespace std;
class Solution
{
public:
    vector<int> missingRolls(vector<int> &rolls, int mean, int n)
    {
        int sum = 0;
        vector<int> ans;
        for (int i : rolls)
        {
            sum += i;
        }
        int n_sum = ((mean) * (rolls.size() + n)) - sum;
        cout << n_sum << endl;
        if ((double(n_sum) / n) > 6 || ((double(n_sum) / n) < 1))
        {
            ans.clear();
            return ans;
        }
        int check_sum = 0,temp=n;
        while (check_sum != n_sum)
        {
            while (n--)
            {
                int num = 1 + rand() % 6;
                check_sum += num;
                ans.push_back(num);
            }
            if (check_sum != n_sum)
            {
                n=temp;
                check_sum = 0;
                ans.clear();
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> rolls = {3, 5, 3};
    int mean = 5;
    int n = 3;
    vector<int> ans = sol.missingRolls(rolls, mean, n);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}