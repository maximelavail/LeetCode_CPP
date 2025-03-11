class Solution {
public:
    int titleToNumber(string columnTitle) {
       int result = 0;
       for(char c: columnTitle) {
        int c_value = c - 64;
        result = result * 26 + c_value;
       }
       return result;
    }
};