class Solution {
public:
    string reverseVowels(string s) {
        string response = s;
        int start = 0, end = s.length() - 1;
        string vowels = "aeiouAEIOU";
        while(start < end) {
            while(start < end && vowels.find(response[start]) == string::npos)
                start++;
            while(start < end && vowels.find(response[end]) == string::npos)
                end--;
            swap(response[start], response[end]);
            start++;
            end--;
        }
        // PS: Y is a vowels...
        return response;
    }
};