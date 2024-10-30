// Binary search in rotated sorted array
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &num, int target)
{
    int st = 0, end = num.size() - 1;
    int midPoint;
    
    while (st <= end)
    {
        midPoint = st + (end - st) / 2;
        if (target == num.at(midPoint))
        {
            return midPoint;
        }
        if (num.at(st) <= num.at(midPoint))
        {
            if (num.at(st) <= target && target <= num.at(midPoint))
            {

                end = midPoint - 1;
            }
            else
            {
                st = midPoint + 1;
            }
        }
        else
        {
            if (num.at(midPoint) <= target && target <= num.at(end))
            {
                st = midPoint + 1;
            }
            else
            {
                end = midPoint - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> a = {5, 6, 0, 1, 2, 3, 4};
    int t = 3;
    cout << binarySearch(a, t);
    return 0;
}
