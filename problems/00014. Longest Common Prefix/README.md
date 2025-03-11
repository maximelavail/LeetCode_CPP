# 🔠 Longest Common Prefix

## 🚀 Problem Statement
Given an array of strings `strs`, find the **longest common prefix** among all the strings. If there is no common prefix, return an empty string `""`.

### 🔹 Example
#### ✅ Input
```cpp
strs = ["flower","flow","flight"]
```
#### 🎯 Output
```cpp
"fl"
```

#### ✅ Input
```cpp
strs = ["dog","racecar","car"]
```
#### 🎯 Output
```cpp
""
```

## 🛠️ Solution Approach
- **Step 1**: Take the first string as a reference.
- **Step 2**: Iterate through each character of the first string.
- **Step 3**: Compare it with the corresponding character in all other strings.
- **Step 4**: If a mismatch is found, return the prefix obtained so far.
- **Step 5**: If no mismatch occurs, append the character to the result.

## 💡 Code Implementation
```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string result;
        for(int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];

            for(int j = 1; j < strs.size(); j++) {
                if(i >= strs[j].size() || c != strs[j][i])
                    return result;
            }
            result.push_back(c);
        }
        return result;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n * m)`, where `n` is the number of strings and `m` is the length of the shortest string.
- **Space Complexity**: `O(1)`, as only a prefix string is stored.

## 🔥 Optimizations
- **Early Termination**: If a mismatch is found, return immediately.
- **Avoid Redundant Comparisons**: Once a prefix is shorter than a string, stop checking further.

## ✅ Edge Cases Considered
- All strings are identical.
- Some strings are empty.
- No common prefix exists.
- Only one string is given.

📌 **A simple and efficient way to find the longest common prefix! ✨**

