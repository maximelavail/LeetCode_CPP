# Increasing Triplet Subsequence

## 🚀 Problem Statement
Given an integer array `nums`, return `true` if there exists a triple of indices `(i, j, k)` such that:
- `i < j < k`
- `nums[i] < nums[j] < nums[k]`

Otherwise, return `false`.

### 🔹 Example
#### ✅ Input
```cpp
nums = [20,100,10,12,5,13]
```
#### 🎯 Output
```cpp
true
```

## 🛠️ Solution Approach
- **Step 1**: Maintain two variables `first` and `second` initialized to `INT_MAX`.
- **Step 2**: Iterate through the array:
  - If `num` is smaller than or equal to `first`, update `first`.
  - Else if `num` is smaller than or equal to `second`, update `second`.
  - Otherwise, return `true` (as we found a valid triplet).
- **Step 3**: If no triplet is found, return `false`.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        for(int num: nums) {
            if(num <= first) {
                first = num;
            } else if(num <= second) {
                second = num;
            } else {
                return true;
            }
        }
        return false;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, since we traverse the array once.
- **Space Complexity**: `O(1)`, as we use only two extra variables.

## 🔥 Optimizations
- This approach avoids sorting or using additional arrays, keeping it optimal.

## ✅ Edge Cases Considered
- Array with less than three elements.
- Array with all equal elements.
- Array with numbers in decreasing order.
- Array with an increasing triplet but separated by smaller numbers.

📌 **Efficient and optimal approach! 🚀**

