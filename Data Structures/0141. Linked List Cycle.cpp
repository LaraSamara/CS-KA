const string URL = "https://leetcode.com/problems/linked-list-cycle/description/";
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL){
            return false;
        }
        ListNode* slow = head ;
        ListNode* fast = head -> next -> next;
        while(fast != NULL && fast -> next != NULL){
            if(slow == fast) return true;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return false;
    }
};