class Solution {
public:
    string interpret(string command) {
        string ans="";
        int n = command.size();
        for(int i = 0; i < n; i++){
            if(command[i]=='G'){
                ans+="G";
            }
            else if(command[i]=='('){
                if(command[i+1]=='a'){
                    ans+="al";
                }
                else{
                    ans+="o";
                }
            }
        }
        return ans;
    }
};