/**
 * LeetCode 24. Swap Nodes in Pairs
 * Time: O(n) | Auxiliary space: O(1)
 *
 * LeetCode provides the ListNode definition.
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;

        while (prev->next != nullptr &&
               prev->next->next != nullptr) {
            ListNode* first = prev->next;
            ListNode* second = first->next;

            // Place the second node before the first node.
            first->next = second->next;
            second->next = first;
            prev->next = second;

            // The first node is now the tail of this swapped pair.
            prev = first;
        }

        return dummy.next;
    }
};
