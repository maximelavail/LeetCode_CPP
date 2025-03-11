# 🔢 Plus One

## 🚀 Problem Statement
You are given a **large integer** represented as an array of digits, where each digit is stored in an element of the array. The integer does not contain any leading zeros except for the number `0` itself.

Your task is to **increment** the integer by **one** and return the resulting array.

### 🔹 Example
#### ✅ Input
```cpp
[1, 2, 3]
```
#### 🎯 Output
```cpp
[1, 2, 4]
```
---
#### ✅ Input
```cpp
[9, 9, 9]
```
#### 🎯 Output
```cpp
[1, 0, 0, 0]
```

## 🛠️ Solution Approach
- **Step 1**: Traverse the array from right to left.
- **Step 2**: If the current digit is **less than 9**, increment it and return the array.
- **Step 3**: If the current digit is **9**, set it to `0` and move to the next digit.
- **Step 4**: If all digits are `9`, insert `1` at the beginning of the array.

## 💡 Code Implementation
```cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
        }
        
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the number of digits.
- **Space Complexity**: `O(1)`, since the update is done in-place (except when adding a new digit).

## 🔥 Optimizations
- The code stops early if the last digit is not `9`, avoiding unnecessary iterations.
- Uses `insert()` for cases where a new most significant digit (`1`) is needed.

## ✅ Edge Cases Considered
- Single-digit numbers.
- Cases where all digits are `9`.
- Arrays with mixed numbers (e.g., `[4, 9, 9] → [5, 0, 0]`).
- Arrays with `0` values.

📌 **A simple yet efficient way to handle large integer increments! 🚀**

