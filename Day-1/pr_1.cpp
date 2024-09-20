class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int reverse = 0, original = x, remainder;
        while (x != 0) {
            remainder = x % 10;
            if (reverse > (INT_MAX - remainder) / 10) {
                return false;
            }
            reverse = reverse * 10 + remainder;
            x /= 10;
        }
        return original == reverse;
    }
};
