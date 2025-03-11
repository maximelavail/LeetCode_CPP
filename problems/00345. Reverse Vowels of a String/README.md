# Reverse Vowels of a String

## 🚀 Problem Statement
Given a string `s`, reverse only the vowels of the string and return the modified version.

### 🔹 Example
#### ✅ Input
```cpp
s = "hello"
```
#### 🎯 Output
```cpp
"holle"
```

## 🛠️ Solution Approach
- **Step 1**: Initialize two pointers, `start` at the beginning and `end` at the end of `s`.
- **Step 2**: Define a string containing all vowels (both uppercase and lowercase).
- **Step 3**: Move `start` forward until it finds a vowel.
- **Step 4**: Move `end` backward until it finds a vowel.
- **Step 5**: Swap the vowels and continue until `start` crosses `end`.

## 💡 Code Implementation
```cpp
class Solution {
public:
    string reverseVowels(string s) {
        string response = s;
        int start = 0, end = s.length() - 1;
        string vowels = "aeiouAEIOU";
        
        while(start < end) {
            while(start < end && vowels.find(response[start]) == string::npos)
                start++;
            while(start < end && vowels.find(response[end]) == string::npos)
                end--;
            swap(response[start], response[end]);
            start++;
            end--;
        }
        return response;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, since we traverse the string once.
- **Space Complexity**: `O(1)`, since we modify the string in place.

## 🔥 Optimizations
- Uses a two-pointer approach for efficiency.
- Swaps vowels in-place to avoid extra space usage.

## ✅ Edge Cases Considered
- Strings with no vowels.
- Strings with all vowels.
- Single-character strings.
- Mixed case scenarios (uppercase and lowercase vowels).

📌 **Fast and in-place vowel reversal! 🚀**

