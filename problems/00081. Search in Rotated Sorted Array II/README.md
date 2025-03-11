# 🔍 Search in Rotated Sorted Array II

## 🚀 Problem Statement
Given an integer array `nums` sorted in non-decreasing order, but possibly rotated at an unknown pivot, determine if a given `target` exists in `nums`. The array may contain duplicates.

### 🔹 Example
#### ✅ Input
```cpp
nums = [2,5,6,0,0,1,2], target = 0
```
#### 🎯 Output
```cpp
true
```
#### ✅ Input
```cpp
nums = [2,5,6,0,0,1,2], target = 3
```
#### 🎯 Output
```cpp
false
```

## 🛠️ Solution Approach
- **Step 1**: Iterate through the array.
- **Step 2**: Compare each element with `target`.
- **Step 3**: If found, return `true`.
- **Step 4**: If the loop ends without finding `target`, return `false`.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return true;
            }
        }
        return false;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, since we perform a linear search.
- **Space Complexity**: `O(1)`, as no additional data structures are used.

## 🔥 Optimizations
- If duplicates were not allowed, we could use binary search (`O(log n)`).
- In an optimized approach, we could attempt a modified binary search even with duplicates.

## ✅ Edge Cases Considered
- Array contains duplicates.
- Array is not rotated.
- Target is at the beginning, middle, or end.
- Target does not exist in the array.

📌 **A straightforward way to search in a rotated sorted array! 🔄✨**

