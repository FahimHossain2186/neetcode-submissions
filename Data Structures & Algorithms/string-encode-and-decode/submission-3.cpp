class Solution {
public:

    string encode(vector<string>& strs) {

        string s = "";

        for(string str : strs){
            s += str + "ঙ";
        }

        return s;
    }

    vector<string> decode(string s) {

        vector<string> strs = {};
        string str = "";

        for (char c : s) {
            
            if(c == 'ঙ'){
                strs.push_back(str);
                str = "";
                continue;
            }
            else{
                str += c;
            }
        }
        
        return strs;

    }
};
