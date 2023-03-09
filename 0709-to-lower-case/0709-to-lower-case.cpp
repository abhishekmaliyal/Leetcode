class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(auto i:s){
            char c = tolower(i);
            ans+=c;
        }
        return ans;
    }
};