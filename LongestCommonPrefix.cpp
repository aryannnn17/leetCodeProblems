#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &s)
    {
        // string temp = strs.at(strs.size() - 1);
        // // strs.pop_back();
        // bool n = true;
        // string str = "";
        // int j = 0;
        // while (n)
        // {
        //     for (string s : strs)
        //     {
        //         if (s.at(j) == temp.at(j))
        //         {
        //             str += (temp[j]);
        //             j++;
        //         }
        //         else
        //         {
        //             n = false;
        //             break;
        //         }
        //     }
        // }
        // return str;

        int ans = s[0].length(), n = s.size();
        for (int i = 1; i < n; i++)
        {
            int j = 0;
            while (j < s[i].length() && s[i][j] == s[0][j])
                j++;
            ans = min(ans, j);
        }
        return s[0].substr(0, ans);
    }
};
int main()
{
    Solution sol;
    vector<string> s = {""};
    cout << sol.longestCommonPrefix(s);
    return 0;
}