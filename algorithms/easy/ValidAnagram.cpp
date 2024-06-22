#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> letters;


        if(t.size() > s.size()) {
            string tmp = s;
            s = t;
            t = tmp;
        }

        int uniqueLetters = 0;
        for (int i = 0; i < s.size(); i++)
        {

            if(letters[s[i]] > 0) letters[s[i]]++;
            else {
                letters[s[i]] = 1;
                uniqueLetters++;
            };
        }

        for (int i = 0; i < t.size(); i++)
        {
            if(letters[t[i]] < 0) {
                return false;
                
            }
            if(letters[t[i]] == 1) {
                uniqueLetters--;
            }
            letters[t[i]]--;
        }
        
        return uniqueLetters == 0;
    }
};