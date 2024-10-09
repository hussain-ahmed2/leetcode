class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i=0; i<nums.size(); i++) {
            bool found = false;
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    found = true;
                    break;
                }   
            }
            if (found) break;            
        }
        return result;
    }
};