class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> groupAnagrams;

        for (int i = 0; i < strs.size(); i++){

            string str = strs[i];
            sort(str.begin(), str.end());

            bool found = false;
            for (vector<string>& check : groupAnagrams) {

                string sortedStr = check[0];
                sort(sortedStr.begin(), sortedStr.end());

                if (sortedStr == str) {
                    check.push_back(strs[i]);
                    found = true;
                    break;
                }
            }
            if (!found) {
                groupAnagrams.push_back({strs[i]});
            }
        }

        return groupAnagrams;
    }
};
