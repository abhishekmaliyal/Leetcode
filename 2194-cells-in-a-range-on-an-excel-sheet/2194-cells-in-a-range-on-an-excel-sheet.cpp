class Solution {
public:
    vector<string> cellsInRange(string s) {   
    char start_col = s[0];
    char start_row = s[1];
    char end_col = s[3];
    char end_row = s[4];
    vector<string> ans;
    for (char i = start_col; i <= end_col; i++)
    {
        for (char j = start_row; j <= end_row; j++)
        {
            string cell = "";
            cell = cell + i + j;
            ans.push_back(cell);
        }
    }
    return ans;

    }
};