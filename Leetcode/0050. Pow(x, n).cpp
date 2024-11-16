const string URL = "https://leetcode.com/problems/powx-n/description/";
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0){
            return 1;
        }else if(x == 0){
            return 0;
        }
        if(n < 0){
            x = 1/x;
        }
        int num = abs(n);
        if(n%2 == 0) return myPow(x*x,num/2);
        else return x*myPow(x*x,num/2);
    }
};