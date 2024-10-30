#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        for (int i = 0; i < haystack.size(); i++)
        {
            for (int j = i; j < haystack.size(); j++)
            {
                if (j == 0)
                {
                    string subStr = haystack.substr(i, j + 1);
                    if (subStr == needle)
                    {
                        // cout << i << " " << j << endl;
                        return i;
                    }
                }
                else
                {
                    string subStr = haystack.substr(i, j);
                    if (subStr == needle)
                    {
                        // cout << i << " " << j << endl;
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    cout << sol.strStr("s", "s");
    return 0;
}