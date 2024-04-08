/*✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦
@author : Ivan Lin (3rd Year SE)
@school : Rochester Institute of Technology
@date   : 2024-04-07
✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦*/


using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> s; //stores the value : index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; //the other number
            if (s.find(complement) != s.end()) { //if we find the complement in s we add the index for the val and complement to result.
                result.push_back(i), result.push_back(s[complement]);
                return result;
            }
            s[nums[i]] = i;
        }
        return result;
    }
};


#ifdef RUNLOCAL
int main(){
Solution solution;

}


#endif
// ~ NaXVI - g++ code.cpp --std=c++2a -DRUNLOCAL && ./a