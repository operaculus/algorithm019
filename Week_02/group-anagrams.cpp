class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<unsigned int, vector<string> > anagrams ;
        unsigned int y,t;
        
        for(string & str:strs) {
            t = 1;
            y = 0;
            for (char &c : str) {
                t *= c;
                y += c;
            }
            anagrams[t+y].push_back(str);               
        }
        for(auto &oc:anagrams) {
            res.push_back(oc.second);
        }
        return res;
    }
};
