class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for (string str : words) {
            bool al = true;
            for (char i : str) {
                if (find(allowed.begin(), allowed.end(), i) == allowed.end()) {
                    al = false;
                    break;
                } 
            }
            if (al) count++;
        }
        return count;
    }
};
