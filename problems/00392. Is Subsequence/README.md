# Is Subsequence

## 🚀 Problem Statement
Given two strings `s` and `t`, return `true` if `s` is a subsequence of `t`, or `false` otherwise.
A subsequence of a string is a new string formed from the original string by deleting some (or none) of the characters without changing the relative order of the remaining characters.

### 🔹 Example
#### ✅ Input
```cpp
s = "abc", t = "ahbgdc"
```
#### 🎯 Output
```cpp
true
```

## 🛠️ Solution Approach
- **Step 1**: Maintain a pointer `j` for string `s`, initialized to `0`.
- **Step 2**: Iterate through string `t`:
  - If `t[i] == s[j]`, move `j` forward and decrease `goal`.
- **Step 3**: If we matched all characters of `s` in `t`, return `true`, else return `false`.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int goal = s.size();
        for(int i = 0, j = 0; i < t.size(); i++) {
            if(t[i] == s[j]) {
                goal--;
                j++;
            }
        }
        return (goal == 0);
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the length of `t`, as we iterate once through `t`.
- **Space Complexity**: `O(1)`, since we use only a few extra variables.

## 🔥 Optimizations
- Uses a simple two-pointer approach for optimal efficiency.
- No extra memory allocation beyond integer counters.

## ✅ Edge Cases Considered
- `s` is empty (`""`).
- `t` is empty (`""`).
- `s` is longer than `t`.
- `s` is the exact same as `t`.
- `s` contains characters not present in `t`.

📌 **Efficient and simple approach to checking subsequences! 🚀**

