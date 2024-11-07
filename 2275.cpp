class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int maxNum = *max_element(candidates.begin(), candidates.end());
        int ans = 0;
        // maxNum = maxNum >> 1;
        // cout << maxNum;
        while (maxNum != 0) {

            int count = 0;
            for (int i = 0; i < candidates.size(); i++) {
                if (candidates.at(i) & 1) {
                    count++;
                    candidates.at(i) = candidates.at(i) << 1;
                }
            }
            cout << count << endl;
            if (ans < count)
                ans = count;
            maxNum = maxNum << 1;
        }

        // cout << maxNum;
        return ans;
    }
};
