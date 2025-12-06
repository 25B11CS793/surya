#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index; // value -> index
        for (int i = 0; i < (int)nums.size(); ++i) {
            int complement = target - nums[i];
            auto it = index.find(complement);
            if (it != index.end()) {
                return {it->second, i};
            }
            index[nums[i]] = i;
        }
        return {}; // Guaranteed one solution per constraints, but keep fallback
    }
};
