class Solution {
public:
    int lengthOfLastWord(string s) {
        bool found = false;
        int length = 0;
        for (int i=s.size()-1; i>=0; i--) {
            if(s[i] == ' ' && !found) {
                continue;
            } else found = true;
            if (found && s[i] != ' ') {
                length++;
            }
            if(s[i] == ' ') break;
        }
        return length;
    }
};