# Move Zeroes

## 🚀 Problem Statement
Given an integer array `nums`, move all `0`'s to the end while maintaining the relative order of non-zero elements.

### 🔹 Example
#### ✅ Input
```cpp
nums = [0,1,0,3,12]
```
#### 🎯 Output
```cpp
[1,3,12,0,0]
```

## 🛠️ Solution Approach
- **Step 1**: Use a pointer `i` to track the position of non-zero elements.
- **Step 2**: Iterate through `nums`, moving non-zero elements to the front.
- **Step 3**: Fill remaining positions with zeros.

## 💡 Code Implementation
```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] != 0) {
                nums[i] = nums[j];
                i++;
            }
        }

        while(i < nums.size()) {
            nums[i] = 0;
            i++;
        }
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, since we traverse the array once.
- **Space Complexity**: `O(1)`, as we modify `nums` in place.

## 🔥 Optimizations
- This approach avoids using an extra array, making it more space-efficient.

## ✅ Edge Cases Considered
- Array with all zeros.
- Array with no zeros.
- Already sorted array (zeros at the end).
- Single element array.

📌 **Efficient and in-place solution! 🚀**

