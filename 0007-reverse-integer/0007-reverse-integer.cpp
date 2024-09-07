class Solution {
public:
    long long reverse(int x) {
        long long reversed = 0;

        while (x != 0) {
            int last_digit = x % 10;

            // Check for overflow before updating reversed
            if (reversed > (INT_MAX / 10) || (reversed == INT_MAX / 10 && last_digit > INT_MAX % 10)) {
                return 0;
            }
            if (reversed < (INT_MIN / 10) || (reversed == INT_MIN / 10 && last_digit < INT_MIN % 10)) {
                return 0;
            }

            reversed = reversed * 10 + last_digit;
            x = x / 10;
        }
        return reversed;
    }
};
