# Can Place Flowers

## 🚀 Problem Statement
You have a flowerbed represented as an array containing `0s` (empty plots) and `1s` (occupied plots). You need to check if you can plant `n` flowers without violating the rule that no two flowers can be adjacent.

### 🔹 Example
#### ✅ Input
```cpp
flowerbed = [1, 0, 0, 0, 1], n = 1
```
#### 🎯 Output
```cpp
true
```

## 🛠️ Solution Approach
- **Step 1**: If `n == 0`, return `true` immediately.
- **Step 2**: Iterate through the `flowerbed` array.
  - If a spot is empty (`0`) and both neighbors (if they exist) are also empty, plant a flower (`1`).
  - Reduce `n` by `1` each time a flower is placed.
  - If `n` reaches `0`, return `true` early.
- **Step 3**: If we exit the loop without placing all flowers, return `false`.

## 💡 Code Implementation
```cpp
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) {
            return true;
        }
        for(int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i+1] == 0)) {
                flowerbed[i] = 1;
                n--;
                if (n == 0) {
                    return true;
                }
            }
        }
        return false;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, since we iterate through the `flowerbed` once.
- **Space Complexity**: `O(1)`, as we modify the input array in place without extra storage.

## 🔥 Optimizations
- Uses early exit to return `true` as soon as enough flowers are placed.
- Efficiently checks neighbors while ensuring boundary conditions are handled.

## ✅ Edge Cases Considered
- The `flowerbed` is empty.
- `n = 0` (no flowers need to be planted).
- The `flowerbed` has no empty spots.
- `flowerbed` starts or ends with `0s`.
- `flowerbed` contains only `0s`.

📌 **A simple and efficient solution for flower placement! 🌸🚀**

