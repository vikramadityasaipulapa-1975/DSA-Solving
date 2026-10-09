/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1=headA;
        ListNode* p2=headB;
        int l1=0,l2=0;
        while(p1!=NULL){
            l1++;
            p1=p1->next;
        }
        while(p2!=NULL){
            l2++;
            p2=p2->next;
        }
        int d;
        if(l1>l2){
            d=l1-l2;
            p1=headA;
            p2=headB;
        }else{
            d=l2-l1;
            p1=headB;
            p2=headA;
        }
        while(d--){
            if(p1==NULL){
                return NULL;
            }
            p1=p1->next;
        }
        while(p1!=NULL && p2!=NULL){
            if(p1==p2){
                return p1;
            }
            p1=p1->next;
            p2=p2->next;
        }
        return NULL;
    }
};