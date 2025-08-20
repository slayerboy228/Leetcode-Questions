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
    ListNode *findNode(ListNode *head, int n) {
        ListNode *temp = head;
        for (int i = 0; i < n - 1; i++) {
            temp = temp->next;
        }
        return temp;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *last = head;
        int cnt = 1;
        while (last->next != NULL) {
            cnt++;
            last = last->next;
        }
        k = k % cnt;
        if (k == 0)
            return head;
        ListNode *prevNode = findNode(head, cnt - k);
        last->next = head;
        head = prevNode->next;
        prevNode->next = NULL;
        return head;
    }
};
