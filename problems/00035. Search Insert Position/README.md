# Search Insert Position

## 🚀 Problem Statement
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

### 🔹 Example
#### ✅ Input
```cpp
nums = [1,3,5,6], target = 5
```
#### 🎯 Output
```cpp
2
```
#### ✅ Input
```cpp
nums = [1,3,5,6], target = 2
```
#### 🎯 Output
```cpp
1
```

## 🛠️ Solution Approach
- **Step 1**: Initialize `left` as `0` and `right` as `nums.size() - 1`.
- **Step 2**: Perform binary search:
  - Compute the middle index.
  - If `nums[mid] == target`, return `mid`.
  - If `nums[mid] < target`, adjust `left`.
  - Otherwise, adjust `right`.
- **Step 3**: If the loop ends without finding `target`, return `left` as the insertion index.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(log n)`, as the binary search algorithm reduces the search space by half each iteration.
- **Space Complexity**: `O(1)`, since we use only a few integer variables.

## 🔥 Optimizations
- Uses binary search instead of linear search, reducing time complexity from `O(n)` to `O(log n)`.
- Avoids unnecessary computations by adjusting search boundaries efficiently.

## ✅ Edge Cases Considered
- Target is smaller than all elements.
- Target is larger than all elements.
- Target is exactly one of the elements.
- Empty array case.

📌 **A clean and efficient way to find the insert position of a target in a sorted array! 🔍📊**

