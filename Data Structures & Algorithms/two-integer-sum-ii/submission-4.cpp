class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int min = 0, max = numbers.size() - 1;

        while(min < max){

            int sum = numbers[min] + numbers[max];

            if(sum == target){
                return {min + 1, max + 1};
            } 
            else if(sum < target){
                min++;
            } 
            else{
                max--;
            }
        }
    }
};
