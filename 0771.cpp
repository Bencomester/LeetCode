class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < stones.size(); i++) {
            if (checkForJewel(stones[i], jewels)) count++;
        }
        return count;
    }

    bool checkForJewel(char c, string jewels) {
        for (int i = 0; i < jewels.size(); i++) {
            if (c == jewels[i]) return true;
        }
        return false;
    }
};
