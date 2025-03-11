class Solution {
public:
    bool hasSameDigits(string s) {
        if (s.length() < 2) return false;
        std::vector<int> str;

        for(int c: s)
            str.push_back(c - '0');

        while(str.size() > 2) {
            std::vector<int> temp_string;
            for (int i = 0; i < str.size() - 1; ++i) {
                temp_string.push_back((str[i] + str[i + 1]) % 10);
            }
            str.swap(temp_string);
        }
        return(str[0] == str[1] && str.size() == 2);
    }
};