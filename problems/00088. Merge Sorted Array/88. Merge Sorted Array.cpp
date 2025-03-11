class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j = m, i = 0; i < nums2.size(); j++) {
            nums1[j] = nums2[i];
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }
};