class Solution {
public:
    bool isValid(string s) {
        bool isValid = true;
    
        for(int i = 0; i < s.length()/2; i++){
            if(s[i] == '(' && s[s.length()-1-i] != ')'){
                isValid = false;
                break;
            }
            else if(s[i] == '[' && s[s.length()-1-i] != ']'){
                isValid = false;
                break;
            }
            else if(s[i] == '{' && s[s.length()-1-i] != '}'){
                isValid = false;
                break;
            }
        }


        return isValid;
    }
};
