# Valid Parentheses

## 🚀 Problem Statement
Given a string `s` containing just the characters `'('`, `')'`, `'{ '`, `'}'`, `'['`, and `']'`, determine if the input string is valid. A string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

### 🔹 Example
#### ✅ Input
```cpp
s = "()"
```
#### 🎯 Output
```cpp
true
```
#### ✅ Input
```cpp
s = "()[]{}"
```
#### 🎯 Output
```cpp
true
```
#### ✅ Input
```cpp
s = "(]"
```
#### 🎯 Output
```cpp
false
```

## 🛠️ Solution Approach
- **Step 1**: Use a stack to track opening brackets.
- **Step 2**: Iterate through the string:
  - Push opening brackets onto the stack.
  - When encountering a closing bracket, check if it matches the last opened bracket using the stack.
  - If it doesn’t match or the stack is empty, return `false`.
- **Step 3**: If the stack is empty at the end, return `true`; otherwise, return `false`.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push(s[i]);
            else if (!stack.empty()) {
                if(s[i] == ')' && stack.top() == '('
                    || s[i] == '}' && stack.top() == '{'
                    || s[i] == ']' && stack.top() == '[')
                        stack.pop();
                else
                    return false;
            } else
                return false;
        }
        return stack.empty();
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, since we traverse the string once and perform `O(1)` operations per character.
- **Space Complexity**: `O(n)` in the worst case (when storing all open brackets in the stack).

## 🔥 Optimizations
- Instead of checking `stack.size() > 0`, use `!stack.empty()` for better readability.
- Return `stack.empty()` directly instead of checking manually at the end.

## ✅ Edge Cases Considered
- Strings with no brackets (`""` should return `true`).
- Strings with only closing brackets (`")}"` should return `false`).
- Nested and interleaved brackets (`"({[]})"` should return `true`).

📌 **A simple and efficient solution using a stack! 🏗️**

