class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (auto i : nums2) {
            nums1.push_back(i);
        }
        sort(nums1.begin(), nums1.end());
        if (nums1.size() % 2 == 1) {
            return nums1.at((nums1.size() - 1) / 2);
        }
        cout << nums1.at(nums1.size() / 2);
        cout << nums1.at((nums1.size() / 2) - 1);
        double res = (double(nums1.at(nums1.size() / 2)) +
                      double(nums1.at((nums1.size() / 2) - 1))) /
                     2;
        return res;
    }
};
