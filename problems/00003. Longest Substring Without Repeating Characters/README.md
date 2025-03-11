# Longest Substring Without Repeating Characters

## 📝 Problem Statement
Given a string `s`, find the length of the longest substring without repeating characters.

## Example
```cpp
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```

## 💡 Approach
We use the sliding window technique with a hash set to efficiently track characters seen so far.

### Steps:
1. Maintain a left pointer and a hash set to track unique characters in the current window.
2. Iterate through the string with a right pointer.
3. If a character is repeated, move the left pointer until all characters in the window are unique.
4. Update the maximum substring length at each step.
5. Return the maximum length found.

## 🔥 C++ Solution
```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chars;
        int left = 0, max_length = 0;

        for(int i = 0; i < s.size(); i++) {
            while(chars.find(s[i]) != chars.end()) {
                chars.erase(s[left]);
                left++;
            }
            chars.insert(s[i]);
            max_length = max(max_length, i - left + 1);
        }
        return max_length;
    }
};
```

### ⏱️ Time Complexity:
- **Time Complexity**: `O(n)`, since each character is added and removed from the set at most once.

### 🛠️ Space Complexity:
- **Space Complexity**: `O(min(n, 26))`, since the set stores at most 26 unique characters (for lowercase English letters).

