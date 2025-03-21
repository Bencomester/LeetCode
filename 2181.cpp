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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* start = new ListNode();
        ListNode* h = start;
        int sum = 0;
        while (head->next != nullptr) {
            if (head->next->val == 0) {
                h->next = new ListNode(sum);
                h = h->next;
                sum = 0; 
            } else {
                sum += head->next->val;
            }
            head = head->next;
        }
        return start->next;
    }
};
