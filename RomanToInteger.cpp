#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        vector<int> digit = {1000, 500, 100, 50, 10, 5, 1};
        vector<char> roman = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        int num = 0, count = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            for (int j = 0; j < roman.size(); j++)
                if (s.at(i) == roman.at(j))
                {
                    if (digit.at(j) >= count)
                    {
                        num = num + digit.at(j);
                        count = digit.at(j);
                    }
                    else
                    {
                        num = num - digit.at(j);
                        count = digit.at(j);
                    }
                }
        }
        return num;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution sol;
    cout << sol.romanToInt(s);
    return 0;
}