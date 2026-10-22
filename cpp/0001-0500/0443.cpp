class Solution {
public:
    int compress(vector<char>& chars) {
        int len = chars.size();
        if (len == 1) {
            chars = {chars[0]};
            return 1;
        }
        int index = 0;
        char last = chars[0];
        int count = 1;
        
        for (int i = 1; i < len; i++) {
            if (chars[i] == last) count++;
            else {
                chars[index++] = last;
                if (count > 1) for (char c : to_string(count)) chars[index++] = c;
                last = chars[i];
                count = 1;
            }
        }
        chars[index++] = last;
        if (count > 1) for (char c : to_string(count)) chars[index++] = c;
        chars.erase(chars.begin() + index, chars.end());
        return index;
    }
};
