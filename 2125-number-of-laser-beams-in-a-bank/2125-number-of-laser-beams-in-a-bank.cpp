class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int prev = 0;
        for( string s: bank){
            int c = count(s.begin(),s.end(),'1');
            ans+=c*prev;
            if(c>0){
                prev = c;
            }
        }
        return ans;
    }
};