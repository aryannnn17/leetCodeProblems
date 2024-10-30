#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string num = to_string(x);
        for ( int i =0 ; i< num.length()/2;i++) {
            if( num[i]==num[num.length()-i-1]) continue;
            else return false;
        }
        return true;

        // ---------- Time Complexity problem in below code ---------------------

        // int temp = x, num = 0;
        // while (x > 0)
        // {
        //     int last_num = x % 10;
        //     x /= 10;
        //     num = num* 10 + last_num ;
        // }
        // if (num == temp)
        //     return true;
        // else
        //     return false;
    }
};

int main()
{
    Solution sol;
    bool ans = sol.isPalindrome(-121);
    cout << ans;
    return 0;
}