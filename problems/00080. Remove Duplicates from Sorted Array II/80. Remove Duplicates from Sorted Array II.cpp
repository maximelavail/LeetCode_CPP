class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int carac_counter = 0, counter = 1;
       for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) {
            carac_counter = 0;
            nums[counter++] = nums[i];
        } else {
            carac_counter++;
            if (carac_counter <= 1) {
                nums[counter++] = nums[i];
            }
        }
       }
       return counter;
    }
};