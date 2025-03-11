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