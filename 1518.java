class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int full = numBottles;
        int empty = 0;
        int drank = 0;
        while (full > 0) {
            drank += full;
            empty += full;
            full = 0;
            full += empty / numExchange;
            empty -= full * numExchange;
        }
        return drank;
    }
}
