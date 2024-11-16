const string URL ="https://leetcode.com/problems/merge-k-sorted-lists/description/";
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>all;
        for(int i=0;i<lists.size();++i){
            ListNode* list = lists[i];
            while(list != NULL){
                all.push_back(list->val);
                list = list->next;
            }
        }
        sort(all.begin(),all.end());
        ListNode* head = new ListNode();
        ListNode* temp = head;
        for(int i=0;i<all.size();++i){
            temp->next = new ListNode(all[i]);
            temp = temp->next;
        }
        return head->next;
    }
};