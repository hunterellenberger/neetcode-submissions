class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> return_vec;
        unordered_map<string, vector<string>> str_map;

        for (auto str: strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            str_map[temp].push_back(str);
        }

        for (auto iter: str_map){
            return_vec.push_back(iter.second);
        }

        return return_vec;
    }
};
