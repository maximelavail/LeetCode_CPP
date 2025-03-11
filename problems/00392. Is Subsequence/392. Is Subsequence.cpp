class Solution {
public:
    bool isSubsequence(string s, string t) {
        int goal = s.size();
        for(int i = 0, j = 0; i < t.size(); i++) {
            if(t[i] == s[j]) {
                goal--;
                j++;
            } 
        }
        return(goal == 0);
    }
};