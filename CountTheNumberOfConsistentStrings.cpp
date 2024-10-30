#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int ans = words.size();
        vector<char> letters;
        for (int i = 0; i < allowed.size(); i++)
        {
            letters.push_back(allowed[i]);
        }
        bool checkChar = false;
        for (int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            for (int j = 0; j < s.size(); j++)
            {
                if (find(letters.begin(), letters.end(), s[j]) == letters.end())
                {
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<string> s = {"abbba", "ad", "a", "b", "aaaaa"};
    cout << sol.countConsistentStrings("ab", s);
    return 0;
}