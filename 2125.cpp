class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int lasers = 0;
        int lastCount = 0;
        int len = bank.size();
        for (int i = 0; i < len; i++) {
            int count = 0;
            for (char c : bank[i]) count += c - '0';
            if (count > 0) {
                lasers += count * lastCount;
                lastCount = count;
            }
        }
        return lasers;
    }
};
