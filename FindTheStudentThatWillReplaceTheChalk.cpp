#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        while (1)
        {
            for (int i = 0; i < chalk.size(); i++)
            {
                k -= chalk.at(i);
                if (k < 0)
                {
                    if (i == chalk.size() || chalk.size()==1)
                    {
                        return 0;
                    }
                    else
                    {
                        return i;
                    }
                }
            }
        }
    }
};
int main()
{

    return 0;
}