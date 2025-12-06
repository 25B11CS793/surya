#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() < 2) return s;
        int start = 0, max_len = 1;

        auto expand = [&](int left, int right) {
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                if (right - left + 1 > max_len) {
                    start = left;
                    max_len = right - left + 1;
                }
                left--;
                right++;
            }
        };

        for (int i = 0; i < s.size(); i++) {
            expand(i, i);       // Odd length
            expand(i, i + 1);   // Even length
        }

        return s.substr(start, max_len);
    }
};
