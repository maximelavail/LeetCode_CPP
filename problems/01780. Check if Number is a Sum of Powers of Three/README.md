# 🔢 Check if a Number is a Sum of Powers of Three

## 📌 Problem Statement
Given an integer `n`, return `true` if it can be represented as a sum of distinct powers of `3`. Otherwise, return `false`.

### 🔹 Example
#### ✅ Input
```cpp
int n = 12;
```
#### 🎯 Output
```cpp
true
```
#### ✅ Input
```cpp
int n = 91;
```
#### 🎯 Output
```cpp
true
```
#### ✅ Input
```cpp
int n = 21;
```
#### 🎯 Output
```cpp
false
```

## 🛠️ Solution Approach
- **Step 1**: If `n` contains a remainder of `2` when divided by `3`, return `false`, since `3^x` terms can only be `0` or `1`.
- **Step 2**: Repeatedly divide `n` by `3` until `n` reaches `0`.
- **Step 3**: If no remainder `2` is encountered, return `true`.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n > 0) {
            if(n % 3 == 2)
               return false;
            n /= 3;
        }
        return true;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(log n)`, since `n` is divided by `3` in each step.
- **Space Complexity**: `O(1)`, as no additional space is used.

## 🔥 Optimizations
- The approach efficiently checks if `n` can be represented as a sum of powers of `3` by leveraging modulo operations.
- No extra space or recursive calls are required.

## ✅ Edge Cases Considered
- **`n` is already a power of `3`**.
- **`n` contains a remainder `2` at any point**.
- **Minimum value (`n = 1`) and large values**.

📌 **A clean and efficient approach to solving this problem! 🚀🔥**

