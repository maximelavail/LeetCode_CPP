# 🔢 Single Number

## 🚀 Problem Statement
Given a **non-empty** array of integers `nums`, where every element appears **twice** except for one, find that single one. You must implement a solution with a **linear runtime complexity** and without using extra memory.

### 🔹 Example
#### ✅ Input
```cpp
nums = [4,1,2,1,2]
```
#### 🎯 Output
```cpp
4
```

#### ✅ Input
```cpp
nums = [2,2,1]
```
#### 🎯 Output
```cpp
1
```

## 🛠️ Solution Approach
- **Step 1**: Initialize a variable `alone` to 0.
- **Step 2**: Iterate through the array and perform XOR (`^=`) with each number.
- **Step 3**: Since `a ^ a = 0` and `0 ^ b = b`, all duplicate numbers cancel out, leaving only the unique number.
- **Step 4**: Return the value of `alone`.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int alone = 0;
        for(int num: nums)
            alone ^= num;  
        return alone;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, since we iterate through the array once.
- **Space Complexity**: `O(1)`, as we use only a single integer variable.

## 🔥 Optimizations
- Using XOR is the optimal solution since it eliminates duplicates in a single pass.
- No need for extra memory (like a hash map), making it highly efficient.

## ✅ Edge Cases Considered
- Array with a single element.
- The unique number appears at the beginning, middle, or end.
- Large input sizes.

📌 **Efficient way to find the single number using bitwise XOR! ⚡**

