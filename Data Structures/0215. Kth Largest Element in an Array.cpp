const string URL = "https://leetcode.com/problems/kth-largest-element-in-an-array/description/";
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,less<int>>pq(nums.begin(),nums.end());
        int val=0;
        while(k--){
            val = pq.top();
            pq.pop();
        }
        return val;
    }
};