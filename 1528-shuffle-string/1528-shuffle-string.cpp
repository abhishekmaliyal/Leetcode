class Solution {
public:
    string restoreString(string s, vector<int>& in) {
        int n = s.size();
        string ans(n, '#');
        for(int i = 0; i < n; ++i){
            ans[in[i]] = s[i];
        }
        return ans;
    }
};