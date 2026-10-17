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
    bool hasCycle(ListNode *head) {
        ListNode* sl = head;
        ListNode* fa = head;
        while (fa != NULL && fa->next != NULL){
            sl = sl->next;
            fa = fa->next->next;
            if (sl == fa){
                return true;
            }
            
        }
        return false;
    }
};