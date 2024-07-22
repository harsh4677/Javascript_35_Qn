#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex; // Maps number to its index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numToIndex.find(complement) != numToIndex.end()) {
                // Return indices of the two numbers
                return {numToIndex[complement], i};
            }
            numToIndex[nums[i]] = i; // Store index of the current number
        }
        
        // If no pair is found, return an empty vector
        return {};
    }
};
