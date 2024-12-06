class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1, -1};
        if (nums.size() == 0)
            return res;
        if (nums.size() == 1 && nums.at(0) == target) {
            res = {0, 0};
            return res;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == target) {
                if (res.at(0) == -1) {
                    res = {i, i};
                } else {
                    res.at(1) = i;
                }
            } else if (nums.at(i) > target) {
                return res;
            }
        }
        return res;
    }
};
