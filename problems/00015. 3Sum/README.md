# Three Sum

## 🚀 Problem Statement
Given an integer array `nums`, return all the unique triplets `[nums[i], nums[j], nums[k]]` such that:
- `i != j != k`
- `nums[i] + nums[j] + nums[k] == 0`

### 🔹 Example
#### ✅ Input
```cpp
nums = {-1,0,1,2,-1,-4}
```
#### 🎯 Output
```cpp
{{-1, -1, 2}, {-1, 0, 1}}
```

## 🛠️ Solution Approach
1. **Sort** the array to efficiently find triplets.
2. **Iterate** through the array, fixing one element at a time.
3. **Use two pointers** (`left` and `right`) to find pairs that sum to the negative of the fixed element.
4. **Skip duplicates** to avoid redundant triplets.

## 💡 Code Implementation
```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        std::sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int left = i + 1, right = nums.size() - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if(sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return result;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n²)`, due to sorting `O(n log n)` and the two-pointer approach `O(n)`.
- **Space Complexity**: `O(1)`, as we use only a result vector.

## 🔥 Optimizations
- **Early termination**: If `nums[i] > 0`, break the loop since a sum of 0 is impossible.
- **Skipping duplicates**: Prevents redundant calculations.

## ✅ Edge Cases Considered
- No possible triplets.
- All positive or all negative numbers.
- Multiple duplicate values.

📌 **Efficient and optimized approach to solve Three Sum! 💲✨**

