#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // int max_size = 0;
        // if(prices.size()==1){
        //     return 0;
        // }
        // int index;
        // for (int i = 1; i < prices.size(); i++)
        // {
        //     if (max_size <= prices.at(i))
        //     {
        //         max_size = max(max_size, prices.at(i) - );
        //         index = i;
        //     }
        // }
        // int min_size = max_size;

        // for (int i = 0; i < index; i++)
        // {
        //     min_size = min(min_size, prices.at(i));
        // }
        // if(min_size==max_size){
        //     return 0;
        // }

        // return max_size - min_size;

        int maxProfit = 0, bestPrice = prices.at(0);

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > bestPrice){
                maxProfit = max(maxProfit, prices.at(i)-bestPrice);
            }
            bestPrice = min(bestPrice, prices.at(i));
        }

        return maxProfit;
    }
};

int main()
{
    Solution sol;
    vector<int> prices = {2, 1, 2, 1, 0, 1, 2};
    cout << sol.maxProfit(prices);
    return 0;
}