class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        vector<int> arr;
        while(x) {
            arr.push_back(x%10);
            x = x/10;
        }
        
        int midpoint = arr.size()/2;
        for(int i=0; i<midpoint; i++) {
            if (arr[i] != arr[arr.size()-1-i]) return false;
        }
        return true;
    }
};