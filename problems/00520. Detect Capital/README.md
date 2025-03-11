# 🚀 Detect Capital

## 📌 Problem Statement
Given a word, determine if its usage of capital letters is correct. A word is valid if:
- All letters are uppercase (e.g., `USA`).
- All letters are lowercase (e.g., `leetcode`).
- Only the first letter is uppercase (e.g., `Google`).

### 🔹 Example
#### ✅ Input
```cpp
string word = "USA";
```
#### 🎯 Output
```cpp
true
```

#### ✅ Input
```cpp
string word = "FlaG";
```
#### 🎯 Output
```cpp
false
```

## 🛠️ Solution Approach
- **Step 1**: Count the number of uppercase letters.
- **Step 2**: The word is valid if:
  - There are no uppercase letters.
  - All letters are uppercase.
  - There is exactly one uppercase letter, and it is the first letter.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap_count = 0;
        for(char c: word)
            if(isupper(c)) cap_count++;
        return cap_count == 0 || cap_count == word.size() || cap_count == 1 && isupper(word[0]);
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(N)`, where `N` is the length of the word (single pass through the string).
- **Space Complexity**: `O(1)`, as only a few integer variables are used.

## 🔥 Optimizations
- **Early exits** when conditions are met.
- **Single loop approach** for efficiency.

## ✅ Edge Cases Considered
- Single-letter words.
- Mixed case words.
- Fully uppercase or lowercase words.
- Words with only the first letter uppercase.

📌 **A clean and optimized solution for checking capital usage! ⚡️🔤**

