class Solution {
public:
    void    generate(int open, int close, std::string current, vector<string>& result){
        if(open == 0 && close == 0) {
            std::cout << "Push Back !" << std::endl;
            result.push_back(current);
        }
            
        
        if(open > 0){
            std::cout << "Open ! restant avant : " << open << " après : " << open - 1 << std::endl;
            generate(open - 1, close, current + "(", result);
        } 
        if(close > open)  {
            std::cout << "Close ! restant avant : " << close << " après : " << close - 1 << std::endl;
            generate(open, close - 1, current + ")", result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(n, n, "", result);
        return result; 
    }
};