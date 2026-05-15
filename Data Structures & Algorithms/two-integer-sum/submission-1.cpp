class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;

        for (auto i = 0; i < nums.size(); i++){
            int goal = target - nums[i];

            if(hash.find(goal) == hash.end()){
                hash[nums[i]] = i;
            }else{
                return {hash.find(goal)->second, i};
            }
        }
    }
};
