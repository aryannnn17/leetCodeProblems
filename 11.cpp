
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0, i = 0, j = height.size() - 1;
        while (i != j) {
            maxArea = max(maxArea, (j - i) * (min(height.at(i), height.at(j))));
            if (height.at(i) > height.at(j)) {
                j--;
            } else {
                i++;
            }
        }
        return maxArea;
    }
};
