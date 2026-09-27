class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> products(n, 1);

        int leftProduct = 1, rightProduct = 1;
        for (int i = 0; i < n; i++) {

            products[i] *= leftProduct;
            leftProduct *= nums[i];

            products[n-1-i] *= rightProduct;
            rightProduct *= nums[n-1-i];
        }

        return products;
                    
    }
};
