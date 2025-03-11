# Remove Duplicates from Sorted Array II

## 🚀 Problem Statement
Given a sorted array `nums`, remove duplicates **in-place** such that each element appears at most **twice**, and return the new length of the modified array. The relative order of elements should be maintained.

### 🔹 Example
#### ✅ Input
```cpp
nums = [1,1,1,2,2,3]
```
#### 🎯 Output
```cpp
[1,1,2,2,3] // Length = 5
```

#### ✅ Input
```cpp
nums = [0,0,1,1,1,1,2,3,3]
```
#### 🎯 Output
```cpp
[0,0,1,1,2,3,3] // Length = 7
```

## 🛠️ Solution Approach
- **Step 1**: Use two counters:
  - `counter` to track the position of the next valid element.
  - `carac_counter` to count occurrences of the current number.
- **Step 2**: Iterate through `nums`, allowing at most **two** occurrences of each number.
- **Step 3**: If the number repeats more than twice, skip it.
- **Step 4**: Return the new length of the array.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int carac_counter = 0, counter = 1;
       for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) {
            carac_counter = 0;
            nums[counter++] = nums[i];
        } else {
            carac_counter++;
            if (carac_counter <= 1) {
                nums[counter++] = nums[i];
            }
        }
       }
       return counter;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the size of the array, as we iterate through it once.
- **Space Complexity**: `O(1)`, since we modify the array in-place.

## 🔥 Optimizations
- Instead of shifting elements manually, we use a **counter pointer** to keep track of the next valid position.
- Using a separate `carac_counter` helps avoid unnecessary swaps.

## ✅ Edge Cases Considered
- An empty array.
- An array with all unique elements.
- An array with all elements being the same.
- An array where each element appears exactly twice.

📌 **A simple and efficient approach to handle duplicate removals! 🚀**

