/*✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦
@author : Ivan Lin (3rd Year SE)
@school : Rochester Institute of Technology
@date   : 2024-04-07
✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦*/

#include <string>
#include <iostream>

using namespace std;

// bool is_alphanumeric(char c) {
//     return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9');
// }

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() -1;
        while (l <= r){
            if (!isalnum(s[l])){
                l++;
            }
            else if (!isalnum(s[r])) {
                r--;
            }
            else{
                char l_comp = s[l], r_comp = s[r];
                if (isupper(l_comp)){
                    l_comp = tolower(l_comp);
                }
                if (isupper(r_comp)) {
                    r_comp = tolower(r_comp);
                }
                if (l_comp == r_comp){
                    l++;
                    r--;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};

#ifdef RUNLOCAL
int main(){
    Solution solution;
    string s = "A man, a plan, a canal: Panama";
    solution.isPalindrome(s);
}
#endif
// ~ NaXVI - g++ code.cpp --std=c++2a -DRUNLOCAL && ./a