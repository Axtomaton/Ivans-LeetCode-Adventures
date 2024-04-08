/*✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦
@author : Ivan Lin (3rd Year SE)
@school : Rochester Institute of Technology
@date   : 2024-04-07
✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦*/

#include <cmath>
#include <stdio.h>
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        else if (x == 0){
            return true;
        }
        long long power = log10(x);
        power = pow(10LL, power);
        long long temp = x;
        long long compar = 0;

        while (temp != 0){
            long long mod = temp % 10; //remainder
            compar += mod * power;
            power /= 10;
            temp /= 10;
        }
        return compar == x;
    }

int main(){
    printf("%s\n", isPalindrome(999) == 1 ? "true" : "false");
    printf("%s\n", isPalindrome(6296) == 1 ? "true" : "false");
    return 0;
}
// ~ NaXVI

