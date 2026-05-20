class Solution {
public:

    string encode(vector<string>& strs) {
        string return_string = "";
        string pound = "#";

        for (auto str: strs){
            return_string += to_string(str.length());
            return_string += pound;
            for (auto ascii: str){
                return_string += ascii;
            }
        }

        return return_string;
    }

    // Get number before hash
    // Ignore hash and start parsing until previous number is reached
    // append that string to vector
    // repeat until end of string

    vector<string> decode(string s) {
        vector<string> return_vec;
        int iter = 0;

        while(iter < s.length()){
            string number = "";

            while(s[iter] != '#'){
                number += s[iter];
                iter++;
            }
            iter++;

            string word;
            for(int j = 0; j < stoi(number); j++){
                word += s[iter];
                iter++;
            }
            
            return_vec.push_back(word);
        }

        return return_vec;
    }
};
