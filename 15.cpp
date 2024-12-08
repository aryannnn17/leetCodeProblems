// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         for (int i = 0; i < nums.size() - 2; i++) {
//             for (int j = i + 1; j < nums.size() - 1; j++) {
//                 for (int k = j + 1; k < nums.size(); k++) {
//                     if (nums.at(i) + nums.at(j) + nums.at(k) == 0) {
//                         vector<int> n = {nums.at(i), nums.at(j), nums.at(k)};
//                         sort(n.begin(), n.end());
//                         if (!n.empty())
//                             ans.push_back(n);
//                     }
//                 }
//             }
//         }
//         sort(ans.begin(), ans.end());
//         auto it = unique(ans.begin(), ans.end());
//         ans.erase(it, ans.end());
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums.at(i) == nums.at(i - 1))
                continue;
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int sum = nums.at(i) + nums.at(left) + nums.at(right);
                if (sum == 0) {
                    ans.push_back({nums.at(i), nums.at(left), nums.at(right)});
                    while (left < right && nums.at(left) == nums.at(left + 1))
                        left++;
                    while (left < right && nums.at(right) == nums.at(right - 1))
                        right--;
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return ans;
    }
};
