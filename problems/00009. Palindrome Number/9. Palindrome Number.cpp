class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long int reverse = 0, y = x;

        while(y != 0) {
            reverse = reverse * 10;
            reverse = reverse + y % 10;
            y = y / 10;
        }

        if (reverse == x) return true;
        return false;
    }
};