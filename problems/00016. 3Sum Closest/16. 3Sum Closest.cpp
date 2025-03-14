class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if(sum == target)
                    return target;
                if(abs(sum - target) < abs(closest - target))
                    closest = sum;

                if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }

            //std::cout << nums[i] << std::endl;
        }

        return closest;
    }
};