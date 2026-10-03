class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<string> permutations;

        sort(s1.begin(), s1.end());   

        do {
            permutations.push_back(s1);
        } while (next_permutation(s1.begin(), s1.end()));
        
        for (const string& perm : permutations) {
            if (s2.find(perm) != string::npos) {
                return true;
            }
        }

        return false;
    }
};
