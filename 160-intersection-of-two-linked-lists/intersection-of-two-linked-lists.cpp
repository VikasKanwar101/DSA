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
        for (ListNode* currA = headA; currA != nullptr; currA = currA->next) {
            for (ListNode* currB = headB; currB != nullptr; currB = currB->next) {
                if (currA == currB) {
                    return currA;
                }
            }
        }
        return nullptr;
    }
};