// -----------<TRY_1 - TIME EXCEED> ------
// class Solution {
// public:
//     long long maximumSubarraySum(vector<int>& nums, int k) {
//         vector<long long> n;
//         for (int i = 0; i <= nums.size() - k; i++) {
//             vector<long long> ans;
//             long long temp = 0;
//             for (int j = i; j < k + i; j++) {
//                 if (ans.end() != find(ans.begin(), ans.end(), nums.at(j))) {
//                     temp = 0;
//                     break;
//                 }
//                 temp += nums.at(j);
//                 ans.push_back(nums.at(j));
//             }
//             n.push_back(temp);
//         }
//         return *max_element(n.begin(), n.end());
//     }
// };

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxSum = 0, currentSum = 0;
        unordered_map<int, int> freq;
        int left = 0;

        for (int right = 0; right < nums.size(); ++right) {
            freq[nums[right]]++;
            currentSum += nums[right];

            while (freq[nums[right]] > 1 || (right - left + 1) > k) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);
                }
                currentSum -= nums[left];
                left++;
            }

            if ((right - left + 1) == k && freq.size() == k) {
                maxSum = max(maxSum, currentSum);
            }
        }

        return maxSum;
    }
};
