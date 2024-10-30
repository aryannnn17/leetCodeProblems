#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
    {
        vector<vector<int>> ans(m , vector<int> (n));
        if (m * n == original.size())
        {
            // cout << "enter" << endl;
            for (int i = 0; i < m; i++)
            {
                // cout << "enter i : " << i << endl;
                for (int j = 0; j < n; j++)
                {
                    // cout << "enter j : " << j << endl;
                    ans[i][j] = original[j + (n * i)];
                    // cout << ans[i][j] << " ";
                }
            }
        }
        else
        {
            // cout << "end";
            ans.clear();
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> a = {1, 2, 3, 4};
    vector<vector<int>> ans = sol.construct2DArray(a, 2, 2);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}