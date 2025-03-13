class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int alone = 0;
        for(int num: nums)
            alone ^= num;  
        return alone;
    }
};