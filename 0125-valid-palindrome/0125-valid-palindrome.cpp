class Solution {
public:
    bool isPalindrome(string s) {
        // Helper function to process the string recursively
        return isPalindromeRecursive(s, 0, s.length() - 1);
    }
    
private:
    bool isPalindromeRecursive(const string& s, int left, int right) {
        // Base case: if pointers have crossed, it's a palindrome
        if (left >= right) {
            return true;
        }
        
        // Skip non-alphanumeric characters on the left
        if (!isalnum(s[left])) {
            return isPalindromeRecursive(s, left + 1, right);
        }
        
        // Skip non-alphanumeric characters on the right
        if (!isalnum(s[right])) {
            return isPalindromeRecursive(s, left, right - 1);
        }
        
        // Compare characters after converting to lowercase
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        // Move towards the center
        return isPalindromeRecursive(s, left + 1, right - 1);
    }
};
