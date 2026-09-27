class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int longestStreak = 0; currentStreak = 1;

        if (num.size() == 1)
            return 1;

        for(int i = 1; i < nums.size(); i++){
            
            if(nums[i] == nums[i - 1] + 1){
                currentStreak++;
            } 
            else if(nums[i] == nums[i - 1]){
                continue;
            }
            else if(nums[i] != nums[i - 1]){
                currentStreak = 1;
            }

            longestStreak = max(longestStreak, currentStreak);

        }

        return longestStreak;
    }
};
