# Remove Element

## 🚀 Problem Statement
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` **in-place** and return the new length of the modified array. The relative order of the elements may be changed.

### 🔹 Example
#### ✅ Input
```cpp
nums = [3,2,2,3], val = 3
```
#### 🎯 Output
```cpp
2, nums = [2,2,_ , _]
```

#### ✅ Input
```cpp
nums = [0,1,2,2,3,0,4,2], val = 2
```
#### 🎯 Output
```cpp
5, nums = [0,1,3,0,4,_,_,_]
```

## 🛠️ Solution Approach
- **Step 1**: Initialize an index variable to track the position of the next non-`val` element.
- **Step 2**: Iterate through the array and copy non-`val` elements to the front.
- **Step 3**: Return the count of remaining elements.

## 💡 Code Implementation
```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the size of `nums`, as we iterate through the array once.
- **Space Complexity**: `O(1)`, as we modify the input array in place.

## 🔥 Optimizations
- We use a single pass (`O(n)`) instead of a secondary array to store results.
- Reducing unnecessary swaps keeps the solution efficient.

## ✅ Edge Cases Considered
- The array is empty.
- All elements are `val` (should return `0`).
- No elements are `val` (should return `nums.size()`).

📌 **A simple and efficient approach to removing elements from an array in-place! 🛠️🚀**

