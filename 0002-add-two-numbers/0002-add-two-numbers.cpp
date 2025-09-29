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
    private:
    void insertAtTail(ListNode *&tail,ListNode *&head,int val){
        ListNode *temp=new ListNode(val);
        if(head==nullptr){
            head=temp;
            tail=temp;
            return;
        }
        tail->next=temp;
        tail=temp;
    }
    ListNode * add(ListNode* first, ListNode* second){
        ListNode *ansHead=nullptr;
        ListNode *ansTail=nullptr;
        int carry=0;
        while(first!=nullptr|| second!=nullptr|| carry!=0){
            int val1=0;
            int val2=0;
            if(first!=nullptr)val1=first->val;
             if(second!=nullptr)val2=second->val;
             int sum=val1+val2+carry;
             int digit=sum%10;
             insertAtTail(ansTail,ansHead,  digit);
             carry=sum/10;
             if(first!=nullptr)first=first->next;
             if(second!=nullptr)second=second->next;

        }
        return ansHead;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return add(l1,l2);
    }
};