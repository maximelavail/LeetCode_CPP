# Generate Parentheses

## 🚀 Problem Statement
Given `n` pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

### 🔹 Example
#### ✅ Input
```cpp
n = 3
```
#### 🎯 Output
```cpp
["((()))","(()())","(())()","()(())","()()()"]
```

## 🛠️ Solution Approach
- **Step 1**: Use a recursive backtracking approach.
- **Step 2**: Maintain two counters: `open` and `close` to track the remaining parentheses.
- **Step 3**: Append an opening bracket `(` if `open > 0`.
- **Step 4**: Append a closing bracket `)` if `close > open`.
- **Step 5**: Once both `open` and `close` reach zero, add the valid sequence to the result.

## 💡 Code Implementation
```cpp
class Solution {
public:
    void generate(int open, int close, std::string current, vector<string>& result){
        if(open == 0 && close == 0) {
            result.push_back(current);
        }
        
        if(open > 0){
            generate(open - 1, close, current + "(", result);
        } 
        if(close > open)  {
            generate(open, close - 1, current + ")", result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(n, n, "", result);
        return result; 
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(4^n / sqrt(n))`, since the number of valid sequences is given by the Catalan number.
- **Space Complexity**: `O(n)`, due to the recursion depth.

## 🔥 Optimizations
- Used **backtracking** to construct valid sequences efficiently.
- Pruned recursive calls when invalid sequences were detected early.

## ✅ Edge Cases Considered
- `n = 0` (empty output)
- Smallest valid `n = 1` (`["()"]`)
- Large `n` values to ensure efficiency.

📌 **An elegant recursive approach to generate valid parentheses combinations! 🏆✨**