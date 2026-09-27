class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> products(n, 1);

        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            products[i] *= leftProduct;
            leftProduct *= nums[i];
        }

        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            products[i] *= rightProduct;
            rightProduct *= nums[i];
        }
            
        return products;
    }
};
