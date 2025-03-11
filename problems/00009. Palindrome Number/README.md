# 🏁 Palindrome Number

## 🚀 Problem Statement
Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

A number is a palindrome if it reads the same forward and backward.

### 🔹 Example
#### ✅ Input
```cpp
x = 121;
```
#### 🎯 Output
```cpp
true
```
#### ✅ Input
```cpp
x = -121;
```
#### 🎯 Output
```cpp
false
```
#### ✅ Input
```cpp
x = 10;
```
#### 🎯 Output
```cpp
false
```

## 🛠️ Solution Approach
- **Step 1**: If `x` is negative, return `false` (negative numbers are not palindromes).
- **Step 2**: Reverse the number digit by digit.
- **Step 3**: Compare the reversed number with the original.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long int reverse = 0, y = x;

        while(y != 0) {
            reverse = reverse * 10;
            reverse = reverse + y % 10;
            y = y / 10;
        }

        return reverse == x;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(log(x))` because we divide `x` by 10 in each iteration.
- **Space Complexity**: `O(1)` as we only use a few integer variables.

## 🔥 Optimizations
- Instead of reversing the whole number, we could reverse only half and compare it with the first half.
- Avoid unnecessary checks for negative numbers early to optimize runtime.

## ✅ Edge Cases Considered
- Single-digit numbers (`x = 7`) are always palindromes.
- Negative numbers are never palindromes.
- Numbers ending with `0` (except `0` itself) cannot be palindromes (`x = 10`).

📌 **A simple and efficient way to check for palindromic numbers! 🔄✨**

