class Solution {
    // int fib(int n) {
    //     if (n <= 1)
    //         return n;
    //     return fib(n - 1) + fib(n - 2);
    // }

public:
    int climbStairs(int n) {
        if (n <= 1)
            return n;
        int prev1 = 1, prev2 = 0;
        int curr;
        for (int i = 2; i <= n+1; i++) {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
};
