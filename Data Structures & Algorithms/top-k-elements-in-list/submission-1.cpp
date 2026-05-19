class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> frequency;
        vector<vector<int>> bucket(nums.size() + 1);
        unordered_map<int, int> hash;
        
        for (auto num: nums){
            hash[num] += 1;
        }

        for (auto iter = hash.begin(); iter != hash.end(); iter++){
            bucket[iter->second].push_back(iter->first);
        }

        int found = 0;
        int iter = nums.size();

        while (found < k){
            if(!bucket[iter].empty()){
                frequency.push_back(bucket[iter].back());
                bucket[iter].pop_back();
                found++;
                iter++;
            }
            iter--;
        }


        return frequency;
    }
};
