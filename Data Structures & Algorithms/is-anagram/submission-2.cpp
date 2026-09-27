#include <algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        bool result = true;

        if(s.length() != t.length()){
            result = false;
        } else {

            sort(s.begin(), s.end());   
            sort(t.begin(), t.end());

            for(int i = 0; i < s.length(); i++){
                if(s[i] != t[i]){
                    result = false;
                    break;
                }
            }
        }

        return result;  
    }
};
