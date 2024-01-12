class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int maxLength = 0, i = 0, j = 0;

        while (j < s.size()) {
            if (charSet.find(s[j]) == charSet.end()) {
                charSet.insert(s[j]);
                maxLength = max(maxLength, j - i + 1);
                j++;
            } else {
                charSet.erase(s[i]);
                i++;
            }
        }

        return maxLength;
    }
};