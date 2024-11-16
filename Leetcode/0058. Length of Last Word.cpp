const string URL = "https://leetcode.com/problems/length-of-last-word/description/";
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }else if(count==0){
                continue;
            }else{
                break;
            }
        }
        return count;
    }
};