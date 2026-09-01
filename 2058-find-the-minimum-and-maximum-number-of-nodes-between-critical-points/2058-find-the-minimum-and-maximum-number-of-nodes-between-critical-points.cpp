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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int curr = -1;
        int prev = -1;
        int mind = INT_MAX;
        int maxd = INT_MIN;
        ListNode* Prev = head;
        ListNode* mid = head->next;
        int index = 1;
        while (mid->next != NULL){
            ListNode* Next = mid->next;
            if (((mid->val > Prev->val && mid->val > Next->val) || (mid->val < Prev->val && mid->val < Next->val))){
                if(curr == -1){
                    curr = index;
                }
                else {
                    mind = min(mind, index - prev);
                    maxd = max(maxd, index - curr);
                }
                prev = index;
            }
            Prev = mid;
            mid = mid->next;
            index++;
        }
        if (maxd == INT_MIN || mind== INT_MAX){
            return {-1,-1};
        }
        return {mind, maxd};
    }
};