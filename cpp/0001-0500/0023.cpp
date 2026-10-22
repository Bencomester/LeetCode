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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = new ListNode();
        ListNode* node = head;
        int min = getMin(lists);
        while(min != -1) {
            node->next = lists[min];
            node = node->next;
            lists[min] = lists[min]->next;
            if (!lists[min]) lists.erase(lists.begin() + min);
            min = getMin(lists);
        }
        return head->next;
    }

    int getMin(vector<ListNode*>& lists) {
        int min = -1;
        int len = lists.size();
        for (int i = 0; i < len; i++) if (lists[i] && (min == -1 || lists[min]->val > lists[i]->val)) min = i;
        return min;
    }
};
