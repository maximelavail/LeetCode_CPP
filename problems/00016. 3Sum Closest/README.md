# 3Sum Closest

## 🚀 Problem Statement
Given an integer array `nums` of length `n` and an integer `target`, find three integers in `nums` such that the sum is closest to `target`. Return the sum of the three integers.

### 🔹 Example
#### ✅ Input
```cpp
nums = [-1, 2, 1, -4], target = 1
```
#### 🎯 Output
```cpp
2
```
#### 🔍 Explanation
The sum that is closest to `1` is `2` (`-1 + 2 + 1 = 2`).

## 🛠️ Solution Approach
1. **Sort the array** to allow for efficient two-pointer traversal.
2. **Initialize `closest` sum** with the first three elements.
3. **Iterate through each element**, using a two-pointer approach to find the closest sum.
4. **Update `closest` whenever a better sum is found**.
5. **Adjust the left and right pointers** based on whether the sum is greater or smaller than the target.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if(sum == target)
                    return target;
                if(abs(sum - target) < abs(closest - target))
                    closest = sum;

                if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return closest;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n^2)`, as we iterate through `n` elements and use two pointers for each.
- **Space Complexity**: `O(1)`, since sorting is done in-place and only a few extra variables are used.

## 🔥 Optimizations
- **Sorting the array** ensures we can use the two-pointer approach efficiently.
- **Early termination** when an exact match is found.
- **Updating `closest` intelligently** without unnecessary recalculations.

## ✅ Edge Cases Considered
- Negative numbers.
- Arrays with only three elements.
- Cases where `target` is smaller or larger than all possible sums.

📌 **A two-pointer approach that efficiently finds the closest sum to the target! 🎯**

