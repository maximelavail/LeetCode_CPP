# Merge Strings Alternately

## 🚀 Problem Statement
Given two strings, `word1` and `word2`, merge them by alternating their characters starting from the first character of each string. If one string is longer, append the remaining characters to the end of the merged string.

### 🔹 Example
#### ✅ Input
```cpp
word1 = "abc", word2 = "pqr"
```
#### 🎯 Output
```cpp
"apbqcr"
```
#### ✅ Input
```cpp
word1 = "ab", word2 = "pqrs"
```
#### 🎯 Output
```cpp
"apbqrs"
```

## 🛠️ Solution Approach
- **Step 1**: Iterate up to the length of the longer string.
- **Step 2**: Append characters alternately from `word1` and `word2`.
- **Step 3**: If one word is longer, append the remaining characters to the result.

## 💡 Code Implementation
```cpp
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;

        for(int i = 0; i < max(word1.size(), word2.size()); ++i) {
            if(i < word1.size())   
                str.append(word1, i, 1);
            if(i < word2.size())
                str.append(word2, i, 1);
        }
        return str;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the length of the longer string, as we iterate through both words.
- **Space Complexity**: `O(1)`, excluding the result string.

## 🔥 Optimizations
- Used `std::string::append()` instead of `+=` for efficiency.
- Avoided unnecessary conditionals by checking length dynamically.

## ✅ Edge Cases Considered
- One of the strings is empty.
- Strings of different lengths.
- Strings containing spaces or special characters.

📌 **A clean and efficient way to merge two strings alternately! 🔄✨**

