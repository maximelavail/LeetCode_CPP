class Solution {
public:
    string reverseWords(string s) {
        int end = s.size() - 1;
        std::vector<string> reverse;

        while(end >= 0) {
            string temp_word = ""; 
            while (end >= 0 && s[end] == ' ') 
                end--;
            if (end < 0) break;
            while(end >= 0 && s[end] != ' ') {
                temp_word.insert(0, 1, s[end]);
                end--;
            }
            reverse.push_back(temp_word);
        }

        string result = "";
        for(int i = 0; i < reverse.size(); i++) {
            if(i > 0) result += ' ';
            result += reverse[i];
        }

        return result;
    }
};