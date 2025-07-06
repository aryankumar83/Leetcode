class Solution {
public:
    string addBinary(string a, string b) {
        string str = "";
        int la = a.size() - 1;
        int lb = b.size() - 1;
        int carry = 0;

        while (la >= 0 || lb >= 0 || carry) {
            int sum = carry;
            if (la >= 0) sum += a[la--] - '0';
            if (lb >= 0) sum += b[lb--] - '0';

            str += (sum % 2) + '0';  // Append the result bit
            carry = sum / 2;         // Update the carry
        }

        reverse(str.begin(), str.end());
        return str;
    }
};
