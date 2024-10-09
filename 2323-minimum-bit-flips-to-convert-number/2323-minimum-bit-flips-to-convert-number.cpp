class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xor_result = start ^ goal;
        int count = 0;
        
        while (xor_result > 0) {
            count += xor_result & 1;  
            xor_result >>= 1;         
        }
        
        return count;
        
    }
};