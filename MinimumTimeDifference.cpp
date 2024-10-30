#include <bits/stdc++.h>
#include <string>
using namespace std;
class Solution
{
public:
    int findMinDifference(vector<string> &timePoints)
    {

        int ans = 1440;
        sort(timePoints.begin(), timePoints.end());
        for (int i = 0; i < timePoints.size(); i++)
        {
            string temp2;
            string temp1 = timePoints.at(i);
            if (i == timePoints.size() - 1)
            {
                temp2 = timePoints.at(0);
            }
            else
            {
                temp2 = timePoints.at(i + 1);
            }
            int hours1 = stoi(temp1.substr(0, 2));
            int hours2 = stoi(temp2.substr(0, 2));
            int minutes1 = stoi(temp1.substr(3, 2));
            int minutes2 = stoi(temp2.substr(3, 2));
            int hours_dif = hours2 - hours1;
            int minutes_dif = minutes2 - minutes1;
            int tempAns = abs(hours_dif * 60 + minutes_dif);

            if (tempAns > 720)
            {
                tempAns = 1440 - tempAns;
            }

            if (ans > tempAns)
            {
                ans = tempAns;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<string> timePoints = {"00:00", "04:00", "22:00"};
    // sort(timePoints.begin(), timePoints.end());
    // for (auto i : timePoints)
    // {
    //     cout << i << " ";
    // }
    cout << sol.findMinDifference(timePoints) << endl;

    return 0;
}