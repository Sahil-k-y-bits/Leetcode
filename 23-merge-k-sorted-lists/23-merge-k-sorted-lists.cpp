#include <queue>
#include <vector>
using namespace std;

// LeetCode provides the ListNode definition.
class Solution {
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) const {
            return a->val > b->val; // Min-heap by node value.
        }
    };

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> minHeap;

        for (ListNode* head : lists) {
            if (head != nullptr) {
                minHeap.push(head);
            }
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (!minHeap.empty()) {
            ListNode* node = minHeap.top();
            minHeap.pop();

            tail->next = node;
            tail = node;

            if (node->next != nullptr) {
                minHeap.push(node->next);
            }
        }

        tail->next = nullptr;
        return dummy.next;
    }
};
