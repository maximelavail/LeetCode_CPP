# 🔢 Subsets II

## 🚀 Problem Statement
Given an integer array `nums` that may contain duplicates, return all possible subsets (the power set). The solution set **must not** contain duplicate subsets.

### 🔹 Example
#### ✅ Input
```cpp
nums = [1,2,2]
```
#### 🎯 Output
```cpp
[[],[1],[1,2],[1,2,2],[2],[2,2]]
```

## 🛠️ Solution Approach
- **Step 1**: Sort the input array to handle duplicates easily.
- **Step 2**: Use a recursive backtracking approach to generate all subsets.
- **Step 3**: If the current element is the same as the previous one, skip it to avoid duplicates.
- **Step 4**: Store each subset in the result list.

## 💡 Code Implementation
```cpp
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
    void backtrack(int start, vector<int>& subset, vector<int>& nums, vector<vector<int>>& result) {
        result.push_back(subset);
        
        for(int i = start; i < nums.size(); i++) {
            if(i > start && nums[i] == nums[i - 1]) continue;
            subset.push_back(nums[i]);
            backtrack(i + 1, subset, nums, result);
            subset.pop_back();
        }
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(2^n)`, where `n` is the size of `nums`, as we generate all subsets.
- **Space Complexity**: `O(n)`, due to recursion depth.

## 🔥 Optimizations
- Sorting helps in easily identifying and skipping duplicates.
- Backtracking avoids unnecessary calculations by pruning duplicate cases early.

## ✅ Edge Cases Considered
- The input array contains duplicate elements.
- The array is empty (`[]`).
- The array contains all unique numbers.

📌 **An optimized approach to generate subsets while handling duplicates efficiently! 🚀🔄**

