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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode start;
        ListNode* list = &start;
        while (list1 != nullptr || list2 != nullptr) {
            if (list1 == nullptr || (list2 != nullptr && list1->val > list2->val)) {
                list->next = list2;
                list = list->next;
                list2 = list2->next;
            } else {
                list->next = list1;
                list = list->next;
                list1 = list1->next;
            }
        }
        return start.next;
    }
};