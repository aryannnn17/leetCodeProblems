#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &num)
{
    int st = 0, end = num.size() - 1;
    int midPoint;

    while (st <= end)
    {

        midPoint = st + (end - st) / 2;
        if (st + (end - st) % 2 == 1)
        {
            midPoint++;
        }
        if (num.at(midPoint) > num.at(midPoint - 1) && num.at(midPoint) > num.at(midPoint + 1))
        {
            return (midPoint);
        }
        else if (num.at(midPoint - 1) < num.at(midPoint) && num.at(midPoint) < num.at(midPoint + 1))
        {
            st = midPoint + 1;
        }
        else
        {
            end = midPoint - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> a = {0, 2, 3, 4, 5, 2};
    cout << binarySearch(a);
    return 0;
}