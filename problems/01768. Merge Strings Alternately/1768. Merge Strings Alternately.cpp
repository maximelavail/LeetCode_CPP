class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;

        for(int i = 0; i < max(word1.size(), word2.size()); ++i) {
            if(i < word1.size())   
                str.append(word1, i, 1);
            if(i < word2.size()) 
                str.append(word2, i, 1);
        }
        return str;
    }
};
