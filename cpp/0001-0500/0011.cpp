class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            water = max(water, (right - left) * min(height[right], height[left]));
            if (height[left] > height[right]) right--;
            else left++;
        }
        return water;
    }
};
