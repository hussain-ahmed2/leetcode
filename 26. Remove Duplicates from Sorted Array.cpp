class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> unique;
        for (int i : nums) {
            unique.insert(i);
        }
        for (int i : nums) nums.pop_back();
        for (int i : unique) nums.push_back(i);

        return unique.size();
    }
};