class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> return_vec;

        for (auto i = 0; i < nums.size(); i++){
            for (auto j = i + 1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    return_vec.push_back(i);
                    return_vec.push_back(j);
                    return return_vec;
                }
            }
        }
    }
};
