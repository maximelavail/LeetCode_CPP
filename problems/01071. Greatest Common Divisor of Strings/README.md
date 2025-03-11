# Greatest Common Divisor of Strings

## 🚀 Problem Statement
Given two strings `str1` and `str2`, return the largest string `x` such that `x` divides both `str1` and `str2`. A string `x` divides a string `s` if `s` is formed by concatenating `x` multiple times.

### 🔹 Example
#### ✅ Input
```cpp
str1 = "ABCABC", str2 = "ABC"
```
#### 🎯 Output
```cpp
"ABC"
```

## 🛠️ Solution Approach
- **Step 1**: Check if `str1 + str2` is equal to `str2 + str1`. If not, return `""` (no common divisor).
- **Step 2**: Compute the greatest common divisor (GCD) of the lengths of `str1` and `str2`.
- **Step 3**: Return the prefix of `str1` with length equal to the computed GCD.

## 💡 Code Implementation
```cpp
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 == str2 + str1)
            return str1.substr(0, std::gcd(str1.size(), str2.size()));
        return "";
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n + m)`, where `n` and `m` are the lengths of `str1` and `str2`, since we concatenate and compare strings.
- **Space Complexity**: `O(1)`, as we only use a few extra variables.

## 🔥 Optimizations
- Using the mathematical property that if `str1 + str2 == str2 + str1`, then the largest divisor substring has a length equal to `gcd(len(str1), len(str2))`.
- No unnecessary iterations or extra memory allocation.

## ✅ Edge Cases Considered
- `str1` or `str2` is empty.
- No common divisor exists.
- Strings are already equal.
- One string is a multiple of the other.

📌 **A concise and efficient solution using mathematical properties! 🔢🚀**

