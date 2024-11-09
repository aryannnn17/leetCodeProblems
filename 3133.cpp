class Solution {
public:
    long long minEnd(int n, int x) {
        n--;
        vector<int> xB(64, 0), nB(64, 0);
        for (int i = 0; i < 32; i++) {
            xB.at(i) = (x >> i) & 1;
            nB.at(i) = (n >> i) & 1;
        }
        int i = 0, j = 0;
        while (i < 64) {
            if (xB.at(i) == 1) {
                i++;
                continue;
            }
            xB.at(i++) = nB.at(j++);
        }

        long long ans = 0;
        for (int i = 0; i < 64; i++) {
            ans += xB.at(i) * (1ll << i);
        }
        return ans;
    }
};
