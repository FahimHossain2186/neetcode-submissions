class Solution {
public:

    string encode(vector<string>& strs) {

        string s = "";

        for(string str : strs){
            s += to_string(str.length()) + "#" + str;
        }

        return s;
    }

    vector<string> decode(string s) {

        vector<string> strs;

        strs = s.split(',');

        return strs;
    }
};
