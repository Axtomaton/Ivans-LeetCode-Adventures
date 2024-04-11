class Solution {



public:
    bool isPowerOfThree(int n) { // n = 3^x
        if (n == 0){ //if it is divisible by 3, we know for a fact that 
            return false;
        }
        else if (n == 1){ // 3/3 = 1 
            return true;
        }
        return (n % 3 == 0) && (isPowerOfThree(n/3)); //if the current val is divisible by 0 and n/3 
    }
};


int main(){

    
}