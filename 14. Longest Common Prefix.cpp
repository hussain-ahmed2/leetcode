class Solution {
public:
    int smallIndex(vector<string>& strs) {
        int minLength = strs[0].size();
        int index = 0;
        for(int i=1; i<strs.size(); i++) {
            if(strs[i].size() < minLength) {
                index = i;
                minLength = strs[i].size();
            }
        }
        return index;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        string smallStr = strs[smallIndex(strs)];
        
        for(int i=0; i<smallStr.size(); i++){
            bool status = true;
            for(int j=0; j<strs.size(); j++){
                if(strs[j][i] == smallStr[i]) {
                    continue;
                }else {
                    status = false;
                    break;
                }
            }
            if (!status) break;
            result += smallStr[i];
        }
        return result;
    }
};