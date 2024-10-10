class Solution {
public:
    int romanToInt(string s) {
        char symbol[] = {'I','V','X','L','C','D','M'};
        int value[] = {1, 5, 10, 50, 100, 500, 1000};
        int result = 0;
        int prev = 0;
        for(int i=0; i<s.size(); i++) {
            for(int j=0; j<7; j++) {
                if (s[i] == symbol[j]) {
                    if (value[j] > prev) {
                        result += value[j] - 2 * prev;
                    } else {
                        result += value[j];
                    }
                    prev = value[j];
                    break;
                }
            }
            
        }
        return result;
    }
};