const string URL ="https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/";
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(n--){
            fast = fast -> next;
        }
        if(fast == NULL)return head -> next;
        while(fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next;
        }
        slow-> next = slow -> next -> next;
        return head;
    }
};