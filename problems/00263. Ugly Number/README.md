# 🚀 Ugly Number

## 📌 Problem Statement
An **ugly number** is a positive integer whose prime factors only include `2`, `3`, and `5`. Given an integer `n`, return `true` if `n` is an ugly number, otherwise return `false`.

### 🔹 Example
#### ✅ Input
```cpp
int n = 6;
```
#### 🎯 Output
```cpp
true
```
#### ✅ Input
```cpp
int n = 14;
```
#### 🎯 Output
```cpp
false
```

## 🛠️ Solution Approach
- **Step 1**: If `n` is non-positive (`<= 0`), return `false`.
- **Step 2**: Continuously divide `n` by `2`, `3`, and `5` while it's divisible.
- **Step 3**: If the remaining value of `n` is `1`, return `true`, otherwise return `false`.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0) return false;
        while(n % 2 == 0)
            n /= 2;
        while(n % 3 == 0)
            n /= 3;
        while(n % 5 == 0)
            n /= 5;
        return n == 1;     
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(log n)`, as `n` is divided by `2`, `3`, or `5` in each step.
- **Space Complexity**: `O(1)`, as only a few integer variables are used.

## 🔥 Optimizations
- The algorithm directly modifies `n` and eliminates unnecessary calculations.
- A `while` loop is used for each prime factor to efficiently reduce `n`.

## ✅ Edge Cases Considered
- **Negative numbers** (should return `false`).
- **Zero** (should return `false`).
- **Numbers that contain prime factors other than `2`, `3`, and `5` (e.g., `7, 11`)**.

📚 **A simple and efficient way to determine ugly numbers! ✨💪**

