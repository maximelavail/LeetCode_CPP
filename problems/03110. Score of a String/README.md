# 🔢 Score of a String

## 📌 Problem Statement
Given a string `s` consisting of lowercase English letters, the **score** of the string is defined as the sum of the absolute differences between the ASCII values of adjacent characters.

Write a function to compute the **score** of the given string.

### 🔹 Example
#### ✅ Input
```cpp
s = "hello";
```
#### 🎯 Output
```cpp
13
```
#### ✅ Input
```cpp
s = "abc";
```
#### 🎯 Output
```cpp
2
```

## 🛠️ Solution Approach
- **Step 1**: Initialize `score = 0` to store the sum.
- **Step 2**: Loop through the string from index `0` to `s.size() - 2`.
- **Step 3**: Compute the absolute difference between adjacent characters' ASCII values and add to `score`.
- **Step 4**: Return the final computed score.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for(int i = 0; i < s.size() - 1; i++)
            score += std::abs(int(s[i]) - int(s[i + 1]));
        return score;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the length of the string, as we iterate once.
- **Space Complexity**: `O(1)`, since we only use a few integer variables.

## 🔥 Optimizations
- No extra space is used apart from variables.
- Using `std::abs` ensures efficient absolute difference computation.

## ✅ Edge Cases Considered
- **Single character strings** (return `0`).
- **Already sorted strings** (minimal differences between characters).
- **Reverse sorted strings** (maximal differences between characters).

📌 **A simple yet efficient approach to scoring a string based on ASCII differences! 🚀**

