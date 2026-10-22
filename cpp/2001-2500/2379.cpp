class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int min = blocks.size();
        for (int i = 0; i <= blocks.length() - k; i++) {
            int white = whites(blocks.substr(i, k));
            if (white < min) min = white;
        }
        return min;
    }

    int whites(string str) {
        int count = 0;
        for (char c : str) if (c == 'W') count++;
        return count;
    }
};
