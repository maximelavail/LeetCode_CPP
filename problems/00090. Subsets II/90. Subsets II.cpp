class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> subset;
        backtrack(0, subset, nums, result);
        return result;
    }

private:
    void    backtrack(int start, vector<int>& subset, vector<int>& nums, vector<vector<int>>& result) {
        result.push_back(subset);

        for(int i = start; i < nums.size(); i++) {
            if(i > start && nums[i] == nums[i - 1]) continue;

            subset.push_back(nums[i]);
            backtrack(i + 1, subset, nums, result);
            subset.pop_back();
        }
    }
};