# Reverse Words in a String

## 🚀 Problem Statement
Given a string `s`, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in `s` will be separated by at least one space. Return a string of the words in reverse order concatenated by a single space.

### 🔹 Example
#### ✅ Input
```cpp
s = "  hello world  "
```
#### 🎯 Output
```cpp
"world hello"
```

## 🛠️ Solution Approach
- **Step 1**: Trim leading and trailing spaces.
- **Step 2**: Extract words from the string while ignoring extra spaces.
- **Step 3**: Reverse the order of the words.
- **Step 4**: Reconstruct the final string.

## 💡 Code Implementation
```cpp
class Solution {
public:
    string reverseWords(string s) {
        int end = s.size() - 1;
        std::vector<string> reverse;

        while(end >= 0) {
            string temp_word = "";
            while (end >= 0 && s[end] == ' ')
                end--;
            if (end < 0) break;
            while(end >= 0 && s[end] != ' ') {
                temp_word.insert(0, 1, s[end]);
                end--;
            }
            reverse.push_back(temp_word);
        }

        string result = "";
        for(int i = 0; i < reverse.size(); i++) {
            if(i > 0) result += ' ';
            result += reverse[i];
        }

        return result;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the length of the string.
- **Space Complexity**: `O(n)`, as we use a vector to store words.

## ✅ Edge Cases Considered
- Multiple spaces between words.
- Leading and trailing spaces.
- Empty string.
- Single word input.

📌 **This approach ensures efficiency while keeping the code readable!** 🚀

