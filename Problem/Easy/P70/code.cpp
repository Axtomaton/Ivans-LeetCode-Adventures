/*✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦
@author : Ivan Lin (3rd Year SE)
@school : Rochester Institute of Technology
@date   : 2024-04-16
✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦*/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    /**
     * can go either 1 step or 2 steps. DP based solution break this into the subproblems where you either take 1 step or 2. 
     */
    int solve(int n,vector<int>&dp){
        if(n<0)return 0; //invalid path
        if(n==0)return 1; //valid path we reach the top from the recursive call of -1 or -2.

        if(dp[n]!=-1)return dp[n]; //if we still have more paths to go.

        dp[n]= solve(n-1,dp) + solve(n-2,dp);  //1 or 2 steps
        
        return dp[n];  
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1); //n+1 is the size, and default
        return solve(n,dp);
    }
};


#ifdef RUNLOCAL
int main(){
Solution solution;

}

#endif
// ~ NaXVI - g++ code.cpp --std=c++2a -DRUNLOCAL && ./a