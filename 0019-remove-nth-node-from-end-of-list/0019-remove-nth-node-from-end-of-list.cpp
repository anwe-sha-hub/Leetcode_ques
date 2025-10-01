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
        ListNode* fast = head;
        ListNode* slow = head;

        // Move fast n steps ahead
        for(int i = 0; i < n; i++)
            fast = fast->next;

        // If fast is NULL, delete head
        if(!fast) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Move both until fast->next is NULL
        while(fast->next) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete slow->next
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        delete nodeToDelete;

        return head;
    }
};