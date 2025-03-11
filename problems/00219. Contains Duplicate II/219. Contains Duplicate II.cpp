class Solution {
public:
    /*
    * New version 54ms... still too long 😭
    */
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++) {
            if(map.find(nums[i]) != map.end()) {   
                if((i - map[nums[i]]) <= k) {
                    return true;
                }
            }
            map[nums[i]] = i;
        }
        return false;
    }
    /*
    *
    *   Old version 1583ms, incompatible with my ambitions to develop hft program where performance is the key
    *
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++) {

            int j = i + 1;
            while (j <= min(i + k, static_cast<int>(nums.size() - 1))) {
                if(nums[i] == nums[j] && (abs(i - j) <= k)) {
                    return true;
                }
                j++;
            }
        }
        return false;
    }
    */
};