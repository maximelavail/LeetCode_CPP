class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a map to store the indices of numbers we have seen
        std::unordered_map<int, int> numberIndexMap;

        for (int currentIndex = 0; currentIndex < nums.size(); ++currentIndex) {
            int currentNumber = nums[currentIndex];

            int numberNeeded = target - currentNumber;

            if (numberIndexMap.find(numberNeeded) != numberIndexMap.end()) {
                return {numberIndexMap[numberNeeded], currentIndex};
            }

            numberIndexMap[currentNumber] = currentIndex;
        }

        return {};
    }
};