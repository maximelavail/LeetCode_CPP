# Kids With the Greatest Number of Candies

## 🚀 Problem Statement
Given an integer array `candies` where `candies[i]` represents the number of candies the `i-th` kid has, and an integer `extraCandies`, return a boolean array where `output[i]` is `true` if after giving `extraCandies` to the `i-th` kid, they have the greatest or equal number of candies compared to any other kid.

### 🔹 Example
#### ✅ Input
```cpp
candies = [2,3,5,1,3], extraCandies = 3
```
#### 🎯 Output
```cpp
[true, true, true, false, true]
```

## 🛠️ Solution Approach
- **Step 1**: Find the maximum number of candies any kid currently has.
- **Step 2**: Iterate through the `candies` array, and for each kid, check if adding `extraCandies` makes their total equal to or greater than the maximum found in Step 1.
- **Step 3**: Store `true` or `false` accordingly in the output vector.

## 💡 Code Implementation
```cpp
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector<bool> output;
        // Memory optimisation
        output.reserve(candies.size());

        int max_candies = *max_element(candies.begin(), candies.end());
        
        for(int i = 0; i < candies.size(); i++) {
            output.push_back((candies[i] + extraCandies) >= max_candies);
        }
        return output;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the size of `candies`, as we perform a single scan to find the maximum and another single scan to compute the results.
- **Space Complexity**: `O(1)`, excluding the output vector.

## 🔥 Optimizations
- Used `reserve()` to optimize memory allocation for the output vector.
- Leveraged `max_element()` from the STL instead of manually iterating.
- Used direct `push_back()` without explicit `if-else` conditions for clarity.

## ✅ Edge Cases Considered
- All kids already have the same number of candies.
- `extraCandies` is `0`.
- The smallest number of candies is `0`.
- The array has only one element.

📌 **A simple yet effective approach to solve the problem efficiently! 🍬🔥**

