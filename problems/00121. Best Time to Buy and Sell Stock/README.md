### 🚀 Best Time to Buy and Sell Stock

## 📌 Problem Statement
You are given an array `prices` where `prices[i]` represents the price of a given stock on day `i`. You want to maximize your profit by choosing a single day to buy one stock and a different day in the future to sell it.

Return the maximum profit you can achieve. If no profit can be made, return `0`.

### 🔹 Example
#### ✅ Input
```cpp
prices = [7,1,5,3,6,4]
```
#### 🎯 Output
```cpp
5
```
#### ✅ Input
```cpp
prices = [7,6,4,3,1]
```
#### 🎯 Output
```cpp
0
```

## 🛠️ Solution Approach
- **Step 1**: Initialize `min_price` to a very high value and `max_profit` to 0.
- **Step 2**: Iterate through the `prices` array:
  - If the current price is lower than `min_price`, update `min_price`.
  - Otherwise, calculate potential profit and update `max_profit` if it's higher.
- **Step 3**: Return the maximum profit found.

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
- **Time Complexity**: `O(n)`, as we iterate through the list once.
- **Space Complexity**: `O(1)`, since we use only a few variables.

## 🔥 Optimizations
- Used a **single pass** approach for efficiency.
- Avoided unnecessary nested loops, making it optimal.

## ✅ Edge Cases Considered
- **Only one price in the list** → Return `0`.
- **Prices always decreasing** → No profit possible, return `0`.
- **All prices the same** → No profit possible, return `0`.

📌 **A simple and efficient way to maximize stock trading profit! 📈💰**