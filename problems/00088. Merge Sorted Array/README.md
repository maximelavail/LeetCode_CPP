# Merge Sorted Array

## 🚀 Problem Statement
You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n` representing the number of elements in `nums1` and `nums2` respectively. Merge `nums2` into `nums1` as one sorted array.

### 🔹 Example
#### ✅ Input
```cpp
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6], n = 3
```
#### 🎯 Output
```cpp
[1,2,2,3,5,6]
```

## 🛠️ Solution Approach
- **Step 1**: Append elements from `nums2` into `nums1` at the correct positions.
- **Step 2**: Use sorting to ensure `nums1` remains sorted after merging.

## 💡 Code Implementation
```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j = m, i = 0; i < nums2.size(); j++) {
            nums1[j] = nums2[i];
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O((m+n) log(m+n))` due to sorting.
- **Space Complexity**: `O(1)`, as sorting is done in-place.

## 🔥 Optimizations
- Instead of appending and sorting, a more efficient approach is to merge from the end to avoid extra sorting.
- This avoids the `O(n log n)` sorting step and improves performance to `O(m + n)`.

## ✅ Edge Cases Considered
- `nums1` is empty or `nums2` is empty.
- All elements in `nums1` are smaller/larger than `nums2`.
- Duplicate elements in both arrays.

📌 **A simple yet efficient way to merge two sorted arrays in-place! 🚀**