const string URL = "https://leetcode.com/problems/palindrome-linked-list/description/";
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack <int> stk;
        ListNode *current=head;
        while(current!=NULL){
            stk.push(current->val);
            current=current->next;
        }
        current=head;
        while(current!=NULL){
            if(current->val!=stk.top()) return false;
            stk.pop();
            current=current->next;
        }
        return true;
    }
};