class Solution {
public:
    void generateSubsets(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
        result.push_back(current);
        
        for (int i = index; i < nums.size(); i++) {
            current.push_back(nums[i]);
            generateSubsets(i + 1, nums, current, result);
            current.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;  
        vector<int> current; 
        generateSubsets(0, nums, current, result);
        
        return result;
    }
};
