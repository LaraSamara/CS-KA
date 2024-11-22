const string URL = "https://leetcode.com/problems/single-number/description/";
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int num = 0;
    for(int i = 0 ; i < nums.size() ; ++i)
        num ^= nums[i];
        return num;    
    }
};