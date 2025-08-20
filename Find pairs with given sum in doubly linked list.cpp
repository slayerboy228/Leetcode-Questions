// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
    Node *findTail(Node *head) {
        Node *temp = head;
        while  (temp->next != NULL) {
            temp = temp->next;
        }
        return temp;
    }
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        vector<pair<int,int>> ans;
        if (head == NULL)
            return ans;
        Node *left = head;
        Node *right = findTail(head);
        while (left->data < right->data) {
            if (left->data + right->data == target) {
                ans.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
            }
            else if (left->data + right->data < target)
                left = left->next;
            else
                right = right->prev;
        }
        return ans;
    }
};
