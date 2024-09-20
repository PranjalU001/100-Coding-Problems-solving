class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size();
        int n = b.size();
        string result;
        int carry = 0;
        while (m > 0 || n > 0 || carry) {
            int sum = carry;
            if (m > 0) {
                sum += a[--m] - '0';
            }
            if (n > 0) {
                sum += b[--n] - '0'; 
            }
            result += (sum % 2) + '0';
            carry = sum / 2;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
