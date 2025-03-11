# Two Sum

## 📝 Problem Statement
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have **exactly one solution**, and you may not use the **same element twice**.

You can return the answer in **any order**.

---

## 📌 Example

### Input:
```cpp
nums = [2, 7, 11, 15], target = 9
```

### Output:
```cpp
[0, 1]
```

### Explanation:
- `nums[0] + nums[1] = 2 + 7 = 9` ✅

---

## 💡 Approach
This solution uses a **hash map (unordered_map in C++)** to store the indices of numbers already seen. The algorithm iterates through the array and checks if the **complementary number** (i.e., `target - currentNumber`) exists in the map. If found, we return the indices; otherwise, we store the current number with its index in the map.

### ⏱️ Time Complexity:
- **O(n)** : We traverse the list once and use `unordered_map` for constant-time lookups.

### 🛠️ Space Complexity:
- **O(n)** : In the worst case, we store all numbers in the map.

---

## 🔥 C++ Solution
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numberIndexMap;
        
        for (int currentIndex = 0; currentIndex < nums.size(); ++currentIndex) {
            int currentNumber = nums[currentIndex];
            int numberNeeded = target - currentNumber;

            if (numberIndexMap.find(numberNeeded) != numberIndexMap.end()) {
                return {numberIndexMap[numberNeeded], currentIndex};
            }

            numberIndexMap[currentNumber] = currentIndex;
        }
        return {};
    }
};
```

---

## ✅ Key Takeaways
- **Hash map (unordered_map)** is used for quick lookups.
- The algorithm runs in **O(n) time complexity**.
- **One-pass solution**, efficient for large inputs.

🚀 Happy Coding! 😊

