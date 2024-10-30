#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
        {
            return 1.0;
        }
        if (x == 0)
        {
            return 0.0;
        }
        if (x == 1)
        {
            return 1.0;
        }
        if (x == -1 && n % 2 == 1)
        {
            return -1.0;
        }
        if (x == -1 && n % 2 == 0)
        {
            return 1.0;
        }

        double ans = 1.0;
        int binNum = n;
        if (binNum < 0)
        {
            binNum = -binNum;
            x = 1 / x;
        }

        while (binNum > 0)
        {
            if (binNum % 2 == 1)
            {
                ans *= x;
            }
            x *= x;
            binNum /= 2;
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    cout << sol.myPow(2, -2);
    return 0;
}