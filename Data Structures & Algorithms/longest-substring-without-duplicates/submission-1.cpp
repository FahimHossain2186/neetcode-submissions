class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        string currentSubstring = "";

        for (char c : s) {
            size_t pos = currentSubstring.find(c);          
            if (pos != string::npos)
                currentSubstring.erase(0, pos + 1);         
            currentSubstring += c;
            length = max(length, (int)currentSubstring.size());
        }
        return length;
    }
};
