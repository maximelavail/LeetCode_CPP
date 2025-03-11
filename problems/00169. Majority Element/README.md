# 🏆 Majority Element

## 📌 Problem Statement
Given an array `nums` of size `n`, return the **majority element**. The majority element is the element that appears **more than** `n/2` times.

### 🔹 Example
#### ✅ Input
```cpp
nums = [3,2,3]
```
#### 🎯 Output
```cpp
3
```
#### ✅ Input
```cpp
nums = [2,2,1,1,1,2,2]
```
#### 🎯 Output
```cpp
2
```

## 🛠️ Solution Approach
- **Step 1**: Iterate through the array and pick each number.
- **Step 2**: Count its occurrences by iterating again.
- **Step 3**: If any number appears more than `n/2` times, return it.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        double m = nums.size() / 2;
        int nb_rep;
        int temp;

        for (int i = 0; i < nums.size(); i++) {
            temp = nums[i];
            nb_rep = 0;    
            
            for (int c = 0; c < nums.size(); c++) {
                if (temp == nums[c]){
                    nb_rep++;
                }
                if (nb_rep > m) return temp;
            }
        }
        return 0;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n^2)`, due to the nested loops checking occurrences.
- **Space Complexity**: `O(1)`, as no extra space is used apart from a few variables.

## 🔥 Optimizations
- This approach is inefficient for large inputs.
- Can be optimized using **Boyer-Moore Voting Algorithm** or **HashMap Counting**.

## ✅ Edge Cases Considered
- **Only one element** (trivially the majority element).
- **All elements are the same**.
- **Large input sizes** (performance concerns).

📌 **A brute-force approach to finding the majority element! 🏅💡**

