class Solution {
public:
    int mySqrt(int x) {
        long long i = 1;
        while (x >= i * i)
            i++;
        return i - 1;
    }
};
