class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxIdx = 0;
        for (int i = 0; i < n; i++)
            if (height[i] > height[maxIdx]) maxIdx = i;

        int total = 0, cur = 0;

        for (int i = 0; i <= maxIdx; i++) {      
            cur = max(cur, height[i]);
            total += cur - height[i];
        }

        cur = 0;
        for (int i = n - 1; i > maxIdx; i--) {   
            cur = max(cur, height[i]);
            total += cur - height[i];
        }

        return total;
    }
};