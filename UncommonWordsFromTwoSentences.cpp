#include <bits/stdc++.h>
#include <string>
using namespace std;

vector<string> strToWords(string s)
{
    s = s + ' ';
    vector<string> words;
    int j = 0, count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            words.push_back(s.substr(j, count));
            j = i + 1;
            count = 0;
        }
        else
        {
            count++;
        }
    }
    return words;
}

class Solution
{
public:
    vector<string> uncommonFromSentences(string s1, string s2)
    {
        vector<string> wordList1, wordList2, ans;
        wordList1 = strToWords(s1);
        wordList2 = strToWords(s2);

        for (int i = 0; i < wordList2.size(); i++)
        {
            wordList1.push_back(wordList2.at(i));
        }
        // sort(wordList1.begin(), wordList1.end());
        for (int i = 0; i < wordList1.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < wordList1.size(); j++)
            {
                if (wordList1[i] == wordList1[j])
                {
                    count++;
                }
            }
            if (count==1)
            {
                ans.push_back(wordList1.at(i));
            }
        }

        return ans;
    }
};
int main()
{
    Solution sol;
    string s1 = "this is sweet apple";
    string s2 = "this is sour apple";
    vector<string> ans = sol.uncommonFromSentences(s1, s2);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}