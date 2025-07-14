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
    int getDecimalValue(ListNode* head) {
        ListNode* h = head;
        int i = 1;
        while (h) {
            i *= 2;
            h = h->next;
        }

        h = head;
        int n = 0;
        while (h) {
            i /= 2;
            n += h->val * i;
            h = h->next;
        }

        return n;
    }
};
