class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for (string str : sentences) {
            int n = count(str.begin(), str.end(), ' ');
            if (n > max) max = n;
        }
        return max + 1;
    }
};
