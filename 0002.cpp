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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* it = head;
        int remainder = 0;
        while (l1 != nullptr || l2 != nullptr) {
            int a = 0;
            int b = 0;
            if (l1 != nullptr) {
                a = l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                b = l2->val;
                l2 = l2->next;
            }
            int sum = a + b + remainder;
            it->next = new ListNode(sum % 10);
            it = it->next;
            remainder = sum / 10;
        }
        if (remainder != 0) it->next = new ListNode(remainder);
        return head->next;
    }
};
