class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int k = s1.size();
        sort(s1.begin(), s1.end());              

        for (int i = 0; i + k <= s2.size(); i++) {

            string subString = s2.substr(i, k);      
            sort(subString.begin(), subString.end());

            if (subString == s1) {                   
                return true;
            }
        }
        
        return false;
    
    }
};
