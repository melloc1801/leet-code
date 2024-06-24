#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groupedAnagrams;
        unordered_map<string, vector<string>> keyToAnagrams;

        for (int i = 0; i < strs.size(); i++)
        {
            string key = strs[i];
            sort(key.begin(), key.end());

            keyToAnagrams[key].push_back(strs[i]);
        }

        for(auto& pair: keyToAnagrams) {
            groupedAnagrams.push_back(pair.second);
        }

        return groupedAnagrams;
    }
};
