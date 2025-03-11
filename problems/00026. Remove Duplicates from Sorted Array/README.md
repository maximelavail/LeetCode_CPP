# Remove Duplicates from Sorted Array

## 🚀 Problem Statement
Given a sorted array `nums`, remove the duplicates **in-place** such that each unique element appears only once. The relative order of the elements should be kept the same.

The function should return the number of unique elements. It must modify the array in-place without using extra space for another array.

### 🔹 Example
#### ✅ Input
```cpp
nums = [1, 1, 2]
```
#### 🎯 Output
```cpp
2, nums = [1, 2, _]
```
#### ✅ Input
```cpp
nums = [0,0,1,1,1,2,2,3,3,4]
```
#### 🎯 Output
```cpp
5, nums = [0, 1, 2, 3, 4, _, _, _, _, _]
```

## 🛠️ Solution Approach
- **Step 1**: Initialize a counter `c = 1` to track unique elements.
- **Step 2**: Iterate through the array starting from index `1`.
- **Step 3**: If the current element is different from the previous one, place it at index `c` and increment `c`.
- **Step 4**: Return `c` as the count of unique elements.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[c] = nums[i];
                c++;
            }
        }
        return c;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the size of the array, as we iterate through the array once.
- **Space Complexity**: `O(1)`, since we modify the array in place without extra space.

## 🔥 Optimizations
- Uses a **two-pointer technique** to shift elements efficiently.
- Modifies the array **in-place** without extra space.

## ✅ Edge Cases Considered
- Array of length 1.
- Array with all unique elements.
- Array with all identical elements.
- Large arrays with mixed duplicate and unique values.

📌 **An optimal approach to removing duplicates while preserving order! 🔄✨**

