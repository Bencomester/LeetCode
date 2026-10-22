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
        ListNode* h = head;
        int l = nodeLen(head);
        if (l == n) return head->next;
        head = h;
        for (int i = 0; i < l - n - 1; i++) {
            head = head->next;
        }
        ListNode* join = nullptr;
        if (head->next != nullptr && head->next->next != nullptr) join = head->next->next;
        if (head->next != nullptr) head->next = join;
        return h;
    }

    int nodeLen(ListNode* head) {
        int n = 1;
        while (head->next != nullptr) {
            head = head->next;
            n++;
        }
        return n;
    }
};
