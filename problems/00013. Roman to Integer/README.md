# Roman to Integer

## 🚀 Problem Statement  
Given a Roman numeral `s`, convert it to an integer. The numerals follow the standard rules:  
- 'I' = 1, 'V' = 5, 'X' = 10, 'L' = 50, 'C' = 100, 'D' = 500, 'M' = 1000  
- If a smaller numeral appears before a larger one, it is subtracted (e.g., "IV" = 4, "IX" = 9).  

### 🔹 Example  
#### ✅ Input  
```cpp
s = "III"
```
#### 🎯 Output  
```cpp
3
```
#### ✅ Input  
```cpp
s = "LVIII"
```
#### 🎯 Output  
```cpp
58
```
#### ✅ Input  
```cpp
s = "MCMXCIV"
```
#### 🎯 Output  
```cpp
1994
```

---

## 🛠️ Solution Approach  
- **Step 1**: Store the Roman numeral values in an unordered map for quick lookup.  
- **Step 2**: Traverse the string from left to right.  
- **Step 3**: If a numeral is smaller than the next one, subtract its value. Otherwise, add it.  
- **Step 4**: Return the final computed integer.  

---

## 💡 Code Implementation  
```cpp
class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> data{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int result = 0;
        for(int i = 0; i < s.size(); i++)
            if(i < s.size() - 1 && data[s[i]] < data[s[i + 1]])
                result -= data[s[i]];
            else
                result += data[s[i]];
        return result;
    }
};
```

---

## ⏳ Complexity Analysis  
- **Time Complexity**: `O(n)`, where `n` is the length of the string. We traverse it once.  
- **Space Complexity**: `O(1)`, since the hash map size is constant (only 7 Roman numerals).  

---

## 🔥 Optimizations  
- Used an **unordered_map** for `O(1)` lookup time of Roman numerals.  
- Processed the string in a **single pass** (`O(n)`) instead of using extra checks.  
- The subtraction condition efficiently handles special cases (e.g., "IX" or "CM").  

---

## ✅ Edge Cases Considered  
- Single-character input (`s = "I"`, `s = "M"`)  
- Special subtraction cases (`s = "IV"`, `s = "XC"`)  
- Large numbers (`s = "MMMCMXCIV"`, i.e., 3994)  

📌 **A simple and efficient way to convert Roman numerals to integers! 🏩️📂**  

---

