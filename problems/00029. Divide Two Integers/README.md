# 🚀 Divide Two Integers

## 📌 Problem Statement
Given two integers `dividend` and `divisor`, divide them without using multiplication, division, or modulus operators. Return the quotient after division.

### 🔹 Example
#### ✅ Input
```cpp
int dividend = 10, divisor = 3;
```
#### 🎯 Output
```cpp
3
```
#### ✅ Input
```cpp
int dividend = 7, divisor = -3;
```
#### 🎯 Output
```cpp
-2
```

## 🛠️ Solution Approach
- **Step 1**: Handle the edge case where division would overflow (`INT_MIN / -1` results in `INT_MAX`).
- **Step 2**: Determine the sign of the result using XOR (`^` operator).
- **Step 3**: Convert `dividend` and `divisor` to positive long long values to avoid overflow.
- **Step 4**: Use bitwise left shift (`<<`) to perform repeated subtraction efficiently.
- **Step 5**: Adjust the result based on the sign.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        bool negative = (dividend < 0) ^ (divisor < 0);
        long long a = abs((long long)dividend), b = abs((long long)divisor);
        long long quotient = 0;

        for (int i = 31; i >= 0; i--) {
            if ((b << i) <= a) {
                a -= (b << i);
                quotient += (1LL << i);
            }
        }

        return negative ? -quotient : quotient;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(log N)`, as the algorithm repeatedly shifts bits.
- **Space Complexity**: `O(1)`, as no extra space is used apart from a few variables.

## 🔥 Optimizations
- Used **bitwise shifting** instead of naive subtraction for efficient computation.
- Converted `dividend` and `divisor` to `long long` to **prevent overflow**.

## ✅ Edge Cases Considered
- **Dividing `INT_MIN` by `-1`** (handled separately to prevent overflow).
- **Zero dividend** (return `0`).
- **Negative numbers and mixed signs**.
- **Dividing by `1` or `-1`**.

📌 **A clean and optimized approach to integer division! ⚡️🧮**

