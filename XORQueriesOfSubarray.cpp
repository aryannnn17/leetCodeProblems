#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        vector<int> ret;
        
        for (int i = 0; i < queries.size(); i++)
        {
            int opr = 0;
            for (int j = queries[i][0]; j <= queries[i][1]; j++)
            {
                opr ^= arr[j];
            }
            cout<<opr<<endl;
            ret.push_back(opr);
        }
        return ret;
    }
};

int main()
{
    Solution sol;
    vector<int> ans;
    vector<int> arr = {1, 3, 4, 8};
    vector<vector<int>> queries = {{0, 1}, {1, 2}, {0, 3}, {3, 3}};
    ans = sol.xorQueries(arr, queries);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    // int x = 8;
    // int y = 8;
    // int z = x ^ y;
    // cout << z;
    return 0;
}