# 🚀 Contains Duplicate II

## 📌 Problem Statement
Given an integer array `nums` and an integer `k`, return `true` if there are two **distinct indices** `i` and `j` in the array such that `nums[i] == nums[j]` and the **absolute difference** between `i` and `j` is at most `k`.

### 🔹 Example
#### ✅ Input
```cpp
vector<int> nums = {1,2,3,1};
int k = 3;
```
#### 🎯 Output
```cpp
true
```
#### ✅ Input
```cpp
vector<int> nums = {1,2,3,1,2,3};
int k = 2;
```
#### 🎯 Output
```cpp
false
```

## 🛠️ Solution Approach
- **Step 1**: Use an unordered map to store the last index of each number encountered.
- **Step 2**: Iterate through `nums`, checking if the current number already exists in the map.
- **Step 3**: If it exists and the difference between indices is `<= k`, return `true`.
- **Step 4**: Otherwise, update the index of the current number in the map.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        
        for(int i = 0; i < nums.size(); i++) {
            if(map.find(nums[i]) != map.end()) {   
                if((i - map[nums[i]]) <= k) {
                    return true;
                }
            }
            map[nums[i]] = i;
        }
        return false;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(N)`, as we traverse the array once.
- **Space Complexity**: `O(N)`, since we store at most `N` elements in the hashmap.

## 🔥 Optimizations
- The optimized approach reduces the naive **O(N^2)** brute-force solution to **O(N)** using a hashmap.
- Avoids unnecessary iterations by checking and updating in a single pass.

## ✅ Edge Cases Considered
- **Array with all unique elements** → Always returns `false`.
- **Array with duplicates but `k` is too small** → Returns `false`.
- **Empty array or single-element array** → Returns `false`.

📌 **A faster and memory-efficient approach to checking nearby duplicates! ⚡️🚀**

