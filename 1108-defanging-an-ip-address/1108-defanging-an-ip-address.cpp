class Solution {
public:
    string defangIPaddr(string add) {
        string str;
        for(int i=0;i<add.size();i++){
            if(add[i]=='.'){
                str+='[';
                str+='.';
                str+=']';
            }
            else
            str+=add[i];
        }
        return str;
    }
};