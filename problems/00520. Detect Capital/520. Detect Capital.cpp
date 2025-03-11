class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap_count = 0;
        for(char c: word) 
            if(isupper(c)) cap_count++;
        return cap_count == 0 || cap_count == word.size() || cap_count == 1 && isupper(word[0]);
    }
};