class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0;
        int height = 0;
        for (int i : gain) {
            height += i;
            if (max < height) max = height; 
        }
        return max;
    }
};
