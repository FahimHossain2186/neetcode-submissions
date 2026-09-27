class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> products = {};
        int mul = 1;

        for(int j = 0; j < nums.size(); j++){

            for(int i = 0; i < nums.size(); i++){
                if(i != j){
                    mul *= nums[i];
                }
            }
            products.push_back(mul);
            mul = 1;    
        }

        return products;
    }
};
