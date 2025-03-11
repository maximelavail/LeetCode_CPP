# 🔢 Number of 1 Bits

## 📌 Problem Statement
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

### 🔹 Example
#### ✅ Input
```cpp
int n = 11; // (00000000000000000000000000001011 in binary)
```
#### 🎯 Output
```cpp
3
```
#### ✅ Input
```cpp
int n = 128; // (00000000000000000000000010000000 in binary)
```
#### 🎯 Output
```cpp
1
```

## 🛠️ Solution Approach
- **Step 1**: Convert the integer to a binary representation using `std::bitset<32>`.
- **Step 2**: Iterate over each bit and count the number of `1`s.

## 💡 Code Implementation
```cpp
class Solution {
public:
    int hammingWeight(int n) {
        std::bitset<32> binary(n);
        int value = 0;
        for(int i = 0; i < binary.size(); i++) {
            if(binary[i] == 1)
                value++;
        }
        return value;
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(32) ≈ O(1)`, since we iterate over 32 bits at most.
- **Space Complexity**: `O(1)`, as only a few extra variables are used.

## 🔥 Optimizations
- Instead of using `std::bitset`, we can count bits using bitwise operations for better performance:

```cpp
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
};
```

## ✅ Edge Cases Considered
- **n = 0** (should return 0)
- **n = 2^31 - 1** (all bits are 1, should return 31)
- **Large values of n** (should still perform efficiently)

📌 **A simple yet powerful bit manipulation problem! 🧮⚡️**

