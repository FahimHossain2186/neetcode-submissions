class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        unordered_map<char, int> charIndex;

        for (char c : s)

            if(charIndex[c] == 1)
                break;
            else{
                charIndex[c]++;
                length++;
            }

        return length;
    }
};
