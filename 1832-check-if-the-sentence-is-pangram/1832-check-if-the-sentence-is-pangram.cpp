class Solution {
public:
    bool checkIfPangram(string sentence) {
        string alpha = "qwertyuiopasdfghjklzxcvbnm";
        int n = sentence.size();
        for(int i = 0;i<alpha.size();i++){
            for(int j = 0;j<n;j++){
                if(sentence[j]==alpha[i]){
                    alpha[i]='#';
                }
                else {
                    continue;
                }
            }
        }
        for(int i = 0;i<alpha.size();i++){
            if(alpha[i]!='#'){
                return false;
            }
            else{
                continue;
            }
        }
        return true;
    }
};