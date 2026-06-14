class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        bool flag = true;
        int i=1;
        while(i<=strs[0].length()){
            string temp_sub = strs[0].substr(0,i);
            int check = 1;
            for(string try_sub : strs){
                if(i>try_sub.length()) return res;
                string cur_sub = try_sub.substr(0,i);
                if(temp_sub!=cur_sub){
                    check = 0;
                    break;
                }
            }
            if(check)
            res = temp_sub;
            i++;
        }
        return res;
    }
};