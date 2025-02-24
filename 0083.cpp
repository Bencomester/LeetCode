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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode list;
        ListNode* i = &list;
        int num = -101;
        while (head != nullptr) {
            if (head->val != num) {
                i->next = head;
                i = i->next;
            }
            num = head->val;
            head = head->next;
        }
        i->next = nullptr;
        return list.next;
    }
};