class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = pow(2, nums.size());
        vector<vector<int>> subsets;
        subsets.reserve(size);

        for(int mask = 0; mask < size; mask++) {
            std::vector<int> subset;
            for(int i = 0; i < nums.size(); i++) {
                if(mask & (1 << i))
                    subset.push_back(nums[i]);
            }
            subsets.push_back(subset);
        }
        return subsets;
    }
};