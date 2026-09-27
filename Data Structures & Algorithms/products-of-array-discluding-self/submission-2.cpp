class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> products = {};
        int mul = 1;
        int ifZero = 1;

        for(int i : nums){
            mul *= i;
            if(i == 0){
                continue;
            }
            ifZero *= i;
        }

        for(int i : nums){
            if(i == 0){
                products.push_back(ifZero);
            } else {
                products.push_back(mul / i);
            }
        }

        return products;
    }
};
