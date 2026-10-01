class Solution {
public:
    bool isValid(string s) {

        vector<char> stack;

        if(s.length() % 2 == 1)
            return false;
        
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

        if(!stack.empty()){
            return false;
        }
            
        return true;
    }
};
