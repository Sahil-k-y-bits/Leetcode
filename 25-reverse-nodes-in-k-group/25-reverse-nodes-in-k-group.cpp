/**
 * LeetCode 25: Reverse Nodes in k-Group
 * Definition for singly-linked list is provided by LeetCode.
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) {
            return head;
        }

        ListNode dummy(0);
        dummy.next = head;
        ListNode* groupPrev = &dummy;

        while (true) {
            // Find the kth node from groupPrev. If it does not exist,
            // the remaining nodes are fewer than k and must stay unchanged.
            ListNode* kth = groupPrev;
            for (int i = 0; i < k && kth != nullptr; ++i) {
                kth = kth->next;
            }

            if (kth == nullptr) {
                break;
            }

            ListNode* groupNext = kth->next;
            ListNode* prev = groupNext;
            ListNode* curr = groupPrev->next;

            // Reverse exactly this group, linking its old head to groupNext.
            while (curr != groupNext) {
                ListNode* nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
            }

            // The old group head is now the tail of the reversed group.
            ListNode* oldGroupHead = groupPrev->next;
            groupPrev->next = kth;
            groupPrev = oldGroupHead;
        }

        return dummy.next;
    }
};
