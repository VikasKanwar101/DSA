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
        ListNode* last=head;
        ListNode* rem=head;
        int c,d;
        c=0;
        while(last){
        last=last->next;
        c++;}
        d=c-n;
        if(d==0) return head->next;
        if(c==1) return NULL;
        while(d>1)
        {
            rem=rem->next;
            d--;
        }
        ListNode* temp=rem->next;
        rem->next=rem->next->next;
        delete temp;
        return head;
    }
};