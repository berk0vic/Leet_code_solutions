class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for(int a = i+1; a < nums.size(); a++) {
                if (nums[a] + nums[i] == target) {
                    return {i,a};
                }
            }
        }
        return {}; 
    }
};
