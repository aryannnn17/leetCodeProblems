#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> lexicalOrder(int n)
    {
        vector<int> result;
        int curr = 1;

        for (int i = 0; i < n; ++i)
        {
            result.push_back(curr);

            if (curr * 10 <= n)
            {
                curr *= 10;
            }

            else
            {
                if (curr >= n)
                {
                    curr /= 10;
                }
                curr += 1;
                while (curr % 10 == 0)
                {
                    curr /= 10;
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;
    int n = 13;
    vector<int> result = sol.lexicalOrder(n);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
