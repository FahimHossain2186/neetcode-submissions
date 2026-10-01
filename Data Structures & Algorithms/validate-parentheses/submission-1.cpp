class Solution {
public:
    bool isValid(string s) {
        bool isValid = true;
        vector<char> stack;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stack.push_back(s[i]);
            }else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(stack.empty()){
                    return false;
                }
                if(s[i] == ')' && stack.back() == '('){
                    stack.pop_back();
                }else if(s[i] == ']' && stack.back() == '['){
                    stack.pop_back();
                }else if(s[i] == '}' && stack.back() == '{'){
                    stack.pop_back();
                }else{
                    return false;
                }
            }
        }
            
        return isValid;
    }
};
