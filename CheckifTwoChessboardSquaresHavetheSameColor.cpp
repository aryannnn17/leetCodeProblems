#include <bits/stdc++.h>
using namespace std;

int checkCol(string s)
{
    int col = s[0] - 'a';
    int row = s[1] - '1';
    
    return (row + col) % 2;
}

class Solution
{
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2)
    {
        return checkCol(coordinate1) == checkCol(coordinate2);
    }
};

int main()
{
    Solution sol;
    string s1 = "a1", s2 = "h8";
    cout << boolalpha << sol.checkTwoChessboards(s1, s2) << endl;
    return 0;
}
