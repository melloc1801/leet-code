#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s1, string s2) {
        if(s1.size() != s2.size()) return false;

        array<int, 26> letters = {};

        for (int i = 0; i < s1.size(); i++)
        {
            letters[s1[i] - 'a']++;
            letters[s2[i] - 'a']--;
        }
        
        for (int i = 0; i < letters.size(); i++)
        {
            if(letters[i] != 0) return false;
        }

        return true;
    }
};