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
        std::unordered_set<ListNode*> nodeSet;

        // Step 1: Store all nodes of list A in the hash set
        ListNode* currA = headA;
        while (currA != nullptr) {
            nodeSet.insert(currA);
            currA = currA->next;
        }

        // Step 2: Traverse list B and check for intersection
        ListNode* currB = headB;
        while (currB != nullptr) {
            if (nodeSet.find(currB) != nodeSet.end()) {
                return currB; // Intersection point found
            }
            currB = currB->next;
        }

        return nullptr; // No intersection found
    }
};
