#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> seen;
        int left = 0, max_len = 0;

        for (int right = 0; right < s.size(); ++right) {
            char c = s[right];
            if (seen.count(c) && seen[c] >= left) {
                left = seen[c] + 1;
            }
            seen[c] = right;
            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};
