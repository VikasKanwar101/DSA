/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <unordered_set>

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::unordered_set<ListNode*>n;
        ListNode *a=headA;
        while(a!=NULL)
        {
            n.insert(a);
            a=a->next;
        }
        ListNode *b=headB;
        while(b!=NULL)
        {
            if(n.find(b)!=n.end())
            return b;
            b=b->next;
        }
        return nullptr;
    }
};
