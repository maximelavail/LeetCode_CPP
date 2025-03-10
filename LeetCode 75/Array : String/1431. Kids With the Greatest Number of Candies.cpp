class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector<bool> output;
        // Memory optimisation
        output.reserve(candies.size());

        int max_candies = *max_element(candies.begin(), candies.end());
        /* Same things but manually
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] > max_candies)
                max_candies = candies[i];
        }
        */

        for(int i = 0; i < candies.size(); i++) {
            if((candies[i] + extraCandies) >= max_candies)
                output.push_back(true);
            else
                output.push_back(false);
        }
        return output;
    }
};