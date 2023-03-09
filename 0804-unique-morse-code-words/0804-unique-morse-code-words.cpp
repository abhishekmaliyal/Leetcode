class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> code;
        int count=1;
        for(auto i: words){
            int n;
            string str;
            for(int j=0;j<i.length();j++){
                n=i[j]-97;
                str+=morse[n];
            }
            code.push_back(str);
        }
        for (int i = 1; i < code.size(); i++) {
            int j;
            for (j = 0; j < i; j++)
                if (code[i] == code[j])
                    break;
            if (i == j) count++;
        }
        return count;
    }
};