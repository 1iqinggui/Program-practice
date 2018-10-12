/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode pHead(0), *p = &pHead;
        while (l1 || l2) {
            int x = l1?l1->val:INT_MAX;
            int y = l2?l2->val:INT_MAX;
            int a = 0;
            if (x >= y) {
                a = y;
                l2 = l2->next;
            } else {
                a = x;
                l1 = l1->next;
            }
            p->next = new ListNode(a);
            p = p->next;
        }
        return pHead.next;
    }
};