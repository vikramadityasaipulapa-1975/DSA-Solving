/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0,head);
        ListNode* start=head;
        ListNode* prev=&dummy;
        while(start!=NULL){
            if(start->val==val){
                prev->next=start->next;
            }
            else{
                prev=start;
            }
            start=start->next;
        }
        return dummy.next;
    }
};