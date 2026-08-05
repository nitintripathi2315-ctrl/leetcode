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

    Node* reverse(Node* head, int times) {
        Node* curr = head;
        Node* prev = NULL;

        while (times--) {
            Node* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }

        // Connect the last node of reversed list to remaining list
        head->next = curr;

        return prev;
    }

    Node* swapPairs(Node* head) {

        if (head == NULL || head->next == NULL)
            return head;

        Node* left = head;
        Node* ans = NULL;
        Node* prevLeft = NULL;

        while (left) {

            // Find second node
            Node* right = left;
            int cnt = 1;

            while (cnt < 2 && right) {
                right = right->next;
                cnt++;
            }

            // Less than 2 nodes left
            if (right == NULL) {
                if (prevLeft)
                    prevLeft->next = left;
                break;
            }

            Node* nextLeft = right->next;

            // Reverse two nodes
            Node* newHead = reverse(left, 2);

            if (ans == NULL)
                ans = newHead;

            if (prevLeft)
                prevLeft->next = newHead;

            prevLeft = left;
            left = nextLeft;
        }

        return ans;
    }
};