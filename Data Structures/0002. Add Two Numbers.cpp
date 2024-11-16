const string URL = "https://leetcode.com/problems/add-two-numbers/description/";
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list = new ListNode();
        ListNode* head = list;
        int carry = 0;
        while(l1 != NULL || l2 != NULL){
            int val1 = (l1 != NULL)? l1 -> val: 0;
            int val2 = (l2 != NULL)? l2 -> val: 0;
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            sum = sum % 10;
            head -> next = new ListNode(sum); 
            head = head -> next;
            if(l1 != NULL) l1 =l1 -> next;
            if(l2 != NULL) l2 = l2 -> next;
        }
        if(carry){
            head -> next =  new ListNode(carry);
            head = head -> next;
        }
        head -> next = NULL;
        return list -> next;
    }
};