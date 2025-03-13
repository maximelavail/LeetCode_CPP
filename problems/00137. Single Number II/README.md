# 🎯 Single Number II

## 🚀 Problem Statement  
Given an integer array `nums`, where every element appears **three times** except for **one**, which appears exactly **once**, find and return the unique element.  
You must implement a solution with a **linear runtime complexity** and **constant extra space**.  

### 🔹 Example  
#### ✅ Input  
```cpp
nums = [2,2,3,2]
```
#### 🎯 Output  
```cpp
3
```

#### ✅ Input  
```cpp
nums = [0,1,0,1,0,1,99]
```
#### 🎯 Output  
```cpp
99
```

## 🛠️ Solution Approach  
### ✅ Using Bitwise XOR & AND Operations  
- We use **two bitmasks**:
  - `alone`: Tracks bits appearing **once**.
  - `twins`: Tracks bits appearing **twice**.
- For each `num` in `nums`:
  1. Update `alone` by XOR-ing it with `num`, then masking out bits that appeared in `twins`.
  2. Update `twins` similarly, masking out bits appearing in `alone`.
- This ensures numbers appearing **three times** are erased while the single number remains.  

## 💡 Code Implementation  
```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int alone = 0, twins = 0;
        for(int num: nums) {
            alone = (alone ^= num) & ~twins;
            twins = (twins ^= num) & ~alone;
        }
        return alone;
    }
};
```

## ⏳ Complexity Analysis  
- **Time Complexity**: `O(n)`, since we iterate through `nums` once.  
- **Space Complexity**: `O(1)`, as only two integer variables are used.  

## 🔥 Optimizations  
- This approach is optimal as it **eliminates the need for extra space** while keeping the solution **linear**.  
- It works for all integer values, including negative numbers.  

## ✅ Edge Cases Considered  
- Single element in the array.  
- All numbers appear exactly three times except one.  
- Large input arrays.  

📌 **A powerful bitwise trick to solve the problem efficiently! 🧠⚡**

