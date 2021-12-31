class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
       
        
        string reversed = str;
        reverse(reversed.begin(), reversed.end());
        
         cout << "str: " << str << endl;
         cout << "reversed: " << reversed << endl;
        if(str == reversed) {
            return true;
        } 
        return false;
    }
};