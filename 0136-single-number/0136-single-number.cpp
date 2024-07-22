class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size();

        // XOR all the elements:
        int xorr = 0;
        for (int i = 0; i < n; i++) {
            xorr = xorr ^ arr[i];
        }
        return xorr;
            
    }
};