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
#define Node ListNode
    Node* rotateRight(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        Node* last = head;
        int n = 1;
        while(last->next != NULL){ // 2 chize pata chali , size aur last node
            n++;
            last = last->next;
        }
        k = k % n ;
        if(k==0) {
            return head;
        }
        Node* t = head;
        int count  =1;
        while(t!=NULL){
            if(count == n-k){
                break;;
            }
            count++;
            t = t->next;
        }
        last->next = head;
        Node* ans = t->next;
        t->next = NULL;
        return ans;
    }
};