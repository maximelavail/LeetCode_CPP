class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int alone = 0, twins = 0;
        for(int num: nums) {
            alone = (alone ^= num) & ~twins;
            twins = (twins ^= num) & ~alone;
        }
        return alone;
    }
};