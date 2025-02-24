public class Solution {
    public bool IsPalindrome(int x) {
        char[] n = x.ToString().ToCharArray();
        char[] r = n.Reverse().ToArray();
        return new string(n) == new string(r);
    }
}
