#include <bits/stdc++.h>
using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int charToInt(string s)
{
    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {
        num = num + (s[i] - 48);
    }
    return num;
}
class Solution
{
public:
    int getLucky(string s, int k)
    {
        string converted_s;
        for (int i = 0; i < s.length(); i++)
        {
            converted_s.append(to_string(s[i] - 96));
        }
        // cout<<converted_s<<endl;
        int num = charToInt(converted_s);
        k--;
        // cout<<num<<endl;
        while ((k != 0) && ((num / 10) != 0))
        {
            num = digitSum(num);
            k--;
        }
        // while(k!=0){

        // }
        return num;
    }
};
int main()
{
    Solution sol;
    string s;
    cin >> s;
    int n = (sol.getLucky(s, 1));
    cout << n;
    return 0;
}