// ------RUNTIME ERROR -----

// class Solution {
//     string decToBin(int n) {
//         string s = "";
//         if (n == 0) {
//             return "0";
//         }
//         while (n) {
//             s += to_string(n % 2);
//             n /= 2;
//         }
//         reverse(s.begin(), s.end());
//         return s;
//     }

//     long long binToDec(string s) {
//         long long num = 0;
//         for (char c : s) {
//             num = num * 2 + (c - '0');
//         }
//         return num;
//     }

// public:
//     string addBinary(string a, string b) {
//         return decToBin(binToDec(a) + binToDec(b));
//     }
// };

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0, i = a.size() - 1, j = b.size() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';
            result += (sum % 2) + '0';
            carry = sum / 2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
