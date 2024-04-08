/*✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦
@author : Ivan Lin (3rd Year SE)
@school : Rochester Institute of Technology
@date   : 2024-04-07
✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦*/

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // TC: O(N)
        // SC: O(N)
        // set<int> - ordered
        // unordered_set<int> - hashed
        unordered_set<int> seen;
        for (int x : nums) {
            if (seen.contains(x)) {
                return true;
            }
            seen.insert(x);
        }
        return false;
    }
};

#ifdef RUNLOCAL 
int main(){
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5}; // Example nums
    cout << solution.containsDuplicate(nums) << endl; // Example usage of the function

}
#endif
// ~ NaXVI - g++ code.cpp --std=c++2a -DRUNLOCAL && ./a