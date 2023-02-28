class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n = s.size();
        int maxcnt = 0;
        for(auto x:s){
            maxcnt = max(maxcnt,(int)count(x.begin(),x.end(),' '));
        }
            return maxcnt+1;
    }
};