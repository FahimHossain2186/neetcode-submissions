class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<string> permutations;

        sort(s1.begin(), s1.end());   

        do {
            if (s2.find(s1) != string::npos) {
                return true;
            }
        } while (next_permutation(s1.begin(), s1.end()));
        
        return false;
    
    }
};
