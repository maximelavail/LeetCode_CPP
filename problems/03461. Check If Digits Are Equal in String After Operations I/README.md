# 🔢 Has Same Digits

## 📌 Problem Statement
Given a string consisting of numerical digits, the task is to repeatedly sum adjacent digits modulo 10 until only two digits remain. If the final two digits are the same, return `true`; otherwise, return `false`.

### 🔹 Example
#### ✅ Input
```cpp
std::string s = "9875";
```
#### 🎯 Output
```cpp
true
```
#### ✅ Input
```cpp
std::string s = "1234";
```
#### 🎯 Output
```cpp
false
```

## 🛠️ Solution Approach
- **Step 1**: Convert each character in the string to its integer value.
- **Step 2**: Continuously compute the sum of adjacent digits modulo 10.
- **Step 3**: Repeat the process until only two digits remain.
- **Step 4**: Check if the last two digits are equal.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool hasSameDigits(string s) {
        if (s.length() < 2) return false;
        std::vector<int> str;

        for(int c: s)
            str.push_back(c - '0');

        while(str.size() > 2) {
            std::vector<int> temp_string;
            for (int i = 0; i < str.size() - 1; ++i) {
                temp_string.push_back((str[i] + str[i + 1]) % 10);
            }
            str.swap(temp_string);
        }
        return (str[0] == str[1] && str.size() == 2);
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(N^2)`, as the size of the array reduces by one in each iteration.
- **Space Complexity**: `O(N)`, as we store intermediate results in a vector.

## 🔥 Optimizations
- Instead of creating a new vector at each iteration, modify the original one in place to reduce space usage.
- Early exit conditions to improve efficiency.

## ✅ Edge Cases Considered
- **Single-digit strings** (return `false`).
- **All identical digits** (should return `true` if length >= 2).
- **Large numbers** (ensure performance is acceptable).

🚀 **A simple yet effective way to process digit transformations! 🔄**