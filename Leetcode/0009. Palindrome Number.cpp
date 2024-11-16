const string URL = "https://leetcode.com/problems/palindrome-number/description/";
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long  rev=0;
        int number= x;
        while(number!=0){
            rev*=10;
            rev+=(number%10);
            number/=10;
        }
        if(x==rev){
            return true;
        }else{
            return false;
        }
    }
};