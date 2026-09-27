class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int> frequencyMap;

        for(int i = 0; i < nums.size(); i++){
            frequencyMap[nums[i]]++;
        }

        vector<pair<int, int>> sortedPairs(frequencyMap.begin(), frequencyMap.end());

        sort(sortedPairs.begin(), sortedPairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        cout << "Frequency Map: " << endl;
        for(auto& pair : sortedPairs){
            cout << pair.first << ": " << pair.second << endl;}

        vector<int> result;

        for(int i = 0; i < k; i++){
            result.push_back(sortedPairs[i].first);
        }
    
        return result;
    }
};
