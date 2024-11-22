const string URL = "https://leetcode.com/problems/intersection-of-two-linked-lists/description/";
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ha=headA;
        ListNode *hb=headB;
        while(ha!=hb){
            if(ha==NULL){
                ha=headB;
            }else{
                ha=ha->next;
            }if(hb==NULL){
                hb=headA;
            }else{
                hb=hb->next;
            }
        }
        return ha;
    }
};