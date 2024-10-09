class Solution {
public:
    double myPow(double x, int n) {

        long long N = n;  // To avoid overflow for large negative numbers
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1.0;
        while (N > 0) {
            if (N % 2 == 1) {
                result *= x;  // If N is odd, multiply x with the result
            }
            x *= x;  // Square the base
            N /= 2;  // Divide the exponent by 2
        }
        
        return result;
        
    }
};