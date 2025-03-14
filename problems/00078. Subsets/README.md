# 🔢 Subsets

## 🚀 Problem Statement
Given an integer array `nums` of unique elements, return all possible subsets (the power set). The solution set must not contain duplicate subsets.

### 🔹 Example
#### ✅ Input
```cpp
nums = [1,2,3]
```
#### 🎯 Output
```cpp
[[],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]]
```

## 🛠️ Solution Approach
- **Step 1**: Compute the total number of subsets using `2^n`, where `n` is the size of `nums`.
- **Step 2**: Iterate over all possible bitmasks from `0` to `2^n - 1`.
- **Step 3**: For each bitmask, construct the corresponding subset by checking which elements are selected.
- **Step 4**: Store each subset in the result vector.

## 💡 Code Implementation
```cpp
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
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n * 2^n)`, since we generate `2^n` subsets and each subset takes at most `O(n)` operations to construct.
- **Space Complexity**: `O(2^n)`, as we store all subsets.


## ✅ Edge Cases Considered
- An empty array (`nums = []` → `[[]]`).
- Single element array (`nums = [1]` → `[[], [1]]`).
- Large input size (`nums` with maximum constraints).

📌 **A powerful bitmask-based approach to generating subsets efficiently! 🔥**

