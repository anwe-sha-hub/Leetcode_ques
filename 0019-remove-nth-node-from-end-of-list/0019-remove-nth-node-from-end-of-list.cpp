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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp=new ListNode (-1);
        temp->next=head;
        ListNode * slow= temp;
         ListNode *fast= temp;
         for(int i=0;i<n;i++){
            fast=fast->next;
         }
         while(fast->next !=NULL){
            slow=slow->next;
            fast=fast->next;
         }
        ListNode * nodedelete=slow->next;
        slow->next=slow->next->next;
        delete nodedelete;

        ListNode * newHead=temp->next;
        delete temp;
        return newHead;
    }
};