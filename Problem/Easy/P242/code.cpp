/*✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦
@author : Ivan Lin (3rd Year SE)
@school : Rochester Institute of Technology
@date   : 2024-04-07
✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦*/


using namespace std;
#include <string> 
#include <iostream>
#include <bits/stdc++.h>


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        unordered_map<int, int> s_freq;
        

        int n = s.size();
        for (int i = 0; i<n; i++){
            s_freq[s[i]]++;
            if (s_freq[s[i]] == 0){
                s_freq.erase(s[i]);
            }
            s_freq[t[i]]--;
            if (s_freq[t[i]] == 0){
                s_freq.erase(t[i]);
            }
        }   
        return (s_freq.size() == 0);


    }
};

#ifdef RUNLOCAL


int main(){
    Solution solution; 
    string s = "car";
    string b = "rat";
    cout << solution.isAnagram(s, b) << std::endl;
}


#endif
// ~ NaXVI - g++ code.cpp --std=c++2a -DRUNLOCAL && ./a
// ~ NaXVI