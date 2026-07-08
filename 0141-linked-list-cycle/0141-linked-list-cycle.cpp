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
    #define ed endl
    #define Node ListNode // so we can write Node* instead of listnode
    #define null NULL
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        if(head->next == NULL) return false;
        Node * slow = head;
        Node * fast = head;
        while(fast!=null && fast->next!=null)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
            }
        }return false;
    }
};