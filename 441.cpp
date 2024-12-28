class Solution {
public:
    int arrangeCoins(int n) {
        long long sum = 0, coins = 1;
        while (n >= sum) {
            sum += coins;
            coins++;
        }
        return coins-2;
    }
};
