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
        int len = 1;
        ListNode *temp = head;
        while(temp->next){
            temp = temp->next;
            len++;
        }
        if(len == 1)
            return nullptr;
        if(len - n == 0)
            return head->next;
        int node = len-n;
        temp = head;
        ListNode *t = head;
        while(node--){
            t = temp;
            temp = temp->next;
        }
        t->next = temp->next;
        return head;
    }
};