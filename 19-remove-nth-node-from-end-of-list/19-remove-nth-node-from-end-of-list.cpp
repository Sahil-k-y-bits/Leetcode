/**
 * LeetCode 19: Remove Nth Node From End of List
 *
 * Two-pointer solution using a dummy node so removing the head is handled
 * in the same way as removing any other node.
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        // Keep a gap of n nodes between fast and slow.
        for (int i = 0; i < n; ++i) {
            fast = fast->next;
        }

        // When fast reaches the last node, slow is just before the target.
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* nodeToRemove = slow->next;
        slow->next = nodeToRemove->next;

        return dummy.next;
    }
};
