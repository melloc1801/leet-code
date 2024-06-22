#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<int, bool> isContains;

        for (int i = 0; i < nums.size(); i++)
        {
            if(isContains[nums[i]]) return true;

            isContains[nums[i]] = true;
        }

        return false;
    }
};
