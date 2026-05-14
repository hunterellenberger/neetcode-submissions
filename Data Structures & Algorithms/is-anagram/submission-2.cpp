#include <map>
#include <iostream>

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> s_map;
        map<char, int> t_map;

        for (auto character : s){
            if (s_map.find(character) != s_map.end()){
                s_map[character] += 1;
            }else{
                s_map.insert({character, 1});
            }
        }

        for (auto character : t){
            if (t_map.find(character) != t_map.end()){
                t_map[character] += 1;
            }else{
                t_map.insert({character, 1});
            }
        }

        if (s_map == t_map) {
            return true;
        }else{
            return false;
        }
    }
};
