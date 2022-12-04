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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* curr=ans;
        int y=0;

        while(l1!=NULL && l2!=NULL){
            int x=l1->val + l2->val+y;
            curr->val = x%10;
            y=x/10;
            l1=l1->next;
            l2=l2->next;

            if(l1!=NULL || l2!=NULL){
                curr->next = new ListNode();
                curr=curr->next;
            }
        }
        while(l1!=NULL){
            int x=l1->val+y;
            curr->val = x%10;
            y=x/10;
            l1=l1->next;
            if(l1!=NULL){
                curr->next = new ListNode();
                curr=curr->next;
            }
        }
        while(l2!=NULL){
            int x=l2->val+y;
            curr->val = x%10;
            y=x/10;
            l2=l2->next;
            if(l2!=NULL){
                curr->next = new ListNode();
                curr=curr->next;
            }
        }

        if(y>0){
            curr->next = new ListNode();
            curr=curr->next;
            curr->val=y;
        }
        return ans;
    }
};
