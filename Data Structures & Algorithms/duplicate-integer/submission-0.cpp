#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (auto number : nums){
            if (seen.find(number) != seen.end()){
                return true;
            }else{
                seen.insert(number); 
            }
        }

        return false;
    }
};