# 🔢 Subtract Product and Sum of Digits of an Integer

## 📌 Problem Statement
Given an integer `n`, return the difference between the product of its digits and the sum of its digits.

### 🔹 Example
#### ✅ Input
```cpp
int n = 234;
```
#### 🎯 Output
```cpp
15
```
#### ✅ Input
```cpp
int n = 4421;
```
#### 🎯 Output
```cpp
21
```

## 🛠️ Solution Approach
- **Step 1**: Initialize `product` to `1` and `sum` to `0`.
- **Step 2**: Extract each digit from `n` using the modulo operator `%`.
- **Step 3**: Multiply the digit to `product` and add it to `sum`.
- **Step 4**: Divide `n` by `10` to move to the next digit.
- **Step 5**: Return `product - sum` as the final result.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;
        while(n > 0) {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n /= 10;
        }
        return product - sum;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(log N)`, where `N` is the number of digits in `n`.
- **Space Complexity**: `O(1)`, since we only use a few integer variables.

## 🔥 Optimizations
- The approach efficiently extracts digits without using extra space.
- Uses a single loop for both multiplication and summation operations.

## ✅ Edge Cases Considered
- **Single-digit numbers** (e.g., `n = 5`, returns `0` since product and sum are equal).
- **Numbers with zeros** (e.g., `n = 101`, correctly handles zero in the product calculation).
- **Large numbers** (handles up to `10^9` safely).

🎯 **A simple yet efficient approach to solving the problem! 🚀**

