#include <iostream>
#include <climits> 
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; // 2^31 - 1
        }
        bool negative = (dividend < 0) ^ (divisor < 0); 
        
        long long absDividend = abs(static_cast<long long>(dividend));
        long long absDivisor = abs(static_cast<long long>(divisor));
        long long quotient = 0;

        while (absDividend >= absDivisor) {
            long long tempDivisor = absDivisor, multiple = 1;

            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1; 
                multiple <<= 1; 
            }

            absDividend -= tempDivisor; 
            quotient += multiple; 
        }

        quotient = negative ? -quotient : quotient;

        return static_cast<int>(quotient);
    }
};

