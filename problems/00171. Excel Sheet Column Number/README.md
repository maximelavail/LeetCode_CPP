# 📈 Best Time to Buy and Sell Stock

## 📌 Problem Statement
You are given an array `prices` where `prices[i]` is the price of a given stock on the `i`th day. You want to maximize your profit by choosing a single day to buy one stock and a different day in the future to sell it.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return `0`.

### 🔹 Example
#### ✅ Input
```cpp
vector<int> prices = {7,1,5,3,6,4};
```
#### 🎯 Output
```cpp
5
```
#### ✅ Input
```cpp
vector<int> prices = {7,6,4,3,1};
```
#### 🎯 Output
```cpp
0
```

## 🛠️ Solution Approach
- **Step 1**: Initialize `min_price` to a very large number (`INT_MAX`) and `max_profit` to `0`.
- **Step 2**: Iterate through the `prices` array:
  - Update `min_price` to the lowest value encountered so far.
  - Calculate the potential profit if selling on the current day.
  - Update `max_profit` if the current profit is higher than the previous max.
- **Step 3**: Return `max_profit` as the final result.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for (int price : prices) {
            min_price = min(min_price, price);
            max_profit = max(max_profit, price - min_price);
        }

        return max_profit;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(N)`, where `N` is the number of days, since we iterate through the array once.
- **Space Complexity**: `O(1)`, as only a few variables are used.

## 🔥 Optimizations
- The algorithm keeps track of the minimum price seen so far in a single pass, making it highly efficient.
- Instead of checking all possible pairs (`O(N^2)`), we maintain a running minimum and update profits dynamically.

## ✅ Edge Cases Considered
- **Prices are always decreasing** (e.g., `[7,6,5,4,3,2,1]` should return `0`).
- **Single element array** (should return `0`).
- **Prices remain constant** (e.g., `[3,3,3,3]` should return `0`).

📌 **A simple and efficient approach to maximize stock trading profit! 🚀📊**