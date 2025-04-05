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
    ListNode* swapPairs(ListNode* head) {
        ListNode* node1 = head;
        if (!head) return nullptr;
        ListNode* node2 = head->next;
        ListNode* last = nullptr;
        if (head->next) head = head->next;
        while (node1 && node2) {
            if (last) last->next = node2;
            node1->next = node2->next;
            node2->next = node1;
            last = node1;
            node1 = node1->next;
            if (node1) node2 = node1->next;
        }
        return head;
    }
};
