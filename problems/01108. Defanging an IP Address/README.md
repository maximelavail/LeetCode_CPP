# 🌐 Defanging an IP Address

## 📌 Problem Statement
Given a valid IPv4 address as a string, replace every `.` with `[.]` to defang it.

### 🔹 Example
#### ✅ Input
```cpp
std::string address = "255.100.50.0";
```
#### 🎯 Output
```cpp
"255[.]100[.]50[.]0"
```

## 🛠️ Solution Approach
- **Step 1**: Initialize an empty string `def_address`.
- **Step 2**: Iterate over each character in the input string:
  - If the character is `.`, append `[.]` to `def_address`.
  - Otherwise, append the character itself.
- **Step 3**: Return the modified string.

## 💡 Code Implementation
```cpp
class Solution {
public:
    string defangIPaddr(string address) {
        string def_address = "";

        for(char i: address) {
            if (i == '.')
                def_address += "[.]";
            else def_address += i;
        }

        return def_address;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the length of the input string.
- **Space Complexity**: `O(n)`, since we create a new string to store the result.

## 🔥 Optimizations
- **Using `std::replace()`**: Instead of manually iterating, we could use `std::replace()` to replace occurrences.
- **Using `std::stringstream`**: This could be more efficient for string concatenations.

## ✅ Edge Cases Considered
- **All digits (e.g., "1234567890")** (no dots should be replaced).
- **Minimal IP address (e.g., "0.0.0.0")** (every dot should be defanged).
- **All dots (invalid case, but still handled gracefully).**

📌 **A simple yet efficient approach to defanging an IP address! 🚀💻**

