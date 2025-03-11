# 🔍 Length of Last Word  

## 🚀 Problem Statement  
Given a string `s` consisting of words and spaces, return the length of the last word in the string. A word is defined as a maximal substring consisting of non-space characters only.

### 🔹 Example  
#### ✅ Input  
```cpp
s = "Hello World"
```  
#### 🎯 Output  
```cpp
5
```  

#### ✅ Input  
```cpp
s = "   fly me   to   the moon  "
```  
#### 🎯 Output  
```cpp
4
```  

#### ✅ Input  
```cpp
s = "luffy is still joyboy"
```  
#### 🎯 Output  
```cpp
6
```  

---

## 🛠️ Solution Approach  
1. **Ignore trailing spaces**: Start from the end of the string and skip all spaces.  
2. **Count characters**: Once a non-space character is found, count its length until another space is encountered or the string ends.  
3. **Return the length** of the last word.  

---

## 💡 Code Implementation  
```cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length() - 1, count = 0;
        while (end >= 0 && s[end] == ' ') end--;  // Skip trailing spaces
        while (end >= 0 && s[end] != ' ') count++, end--;  // Count last word
        return count;
    }
};
```  

---

## ⏳ Complexity Analysis  
- **Time Complexity**: `O(N)`, where `N` is the length of the string. We traverse the string at most once.  
- **Space Complexity**: `O(1)`, as we use only a few extra variables.  

---

## 🔥 Optimizations  
- The solution already runs in **O(N) time**, which is optimal for this problem.  
- No extra space is used, making it **efficient in terms of memory**.  

---

## ✅ Edge Cases Considered  
- Multiple trailing spaces (`"   "`).  
- Single-word input (`"Hello"`).  
- Words separated by multiple spaces.  
- Long input strings.  

📌 **A simple yet effective solution to find the last word length! 🚀**  

