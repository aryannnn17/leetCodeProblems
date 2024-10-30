#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vector<int> computeLPSArray(const string &str)
    {
        int n = str.length();
        vector<int> lps(n, 0);

        int j = 0;
        for (int i = 1; i < n; ++i)
        {

            while (j > 0 && str[i] != str[j])
            {
                j = lps[j - 1];
            }

            if (str[i] == str[j])
            {
                j++;
            }
            lps[i] = j;
        }

        return lps;
    }

    string shortestPalindrome(string s)
    {

        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());

        string new_s = s + '#' + rev_s;

        vector<int> lps = computeLPSArray(new_s);

        int longest_palindromic_prefix_len = lps.back();

        string to_add =
            rev_s.substr(0, s.length() - longest_palindromic_prefix_len);

        return to_add + s;
    }
};


int main()
{
    Solution sol;
    cout<<sol.shortestPalindrome("abcd");
    return 0;
}

