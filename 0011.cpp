class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int water = 0;
        vector<int> maxs(len, height[len - 1]);
        for (int i = len - 2; i >= 0; i--) maxs[i] = max(maxs[i + 1], height[i]);
        for (int i = 0; i < len - 1; i++) {
            int w = len - i - 1;
            if (maxs[i] * w < water) break;
            if (height[i] * w < water) continue;
            for (int j = i + 1; j < len; j++) {
                water = max(water, min(height[i], height[j]) * (j - i));
            }
        }
        return water;
    }
};
