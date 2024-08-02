class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string reversed_str = str;

        reverse(reversed_str.begin(), reversed_str.end());

        return str == reversed_str;
    }
};