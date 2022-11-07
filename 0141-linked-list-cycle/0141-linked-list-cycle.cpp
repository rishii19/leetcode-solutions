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
        
        if(head ==NULL || head->next == nullptr) return false;
               
        unordered_set<ListNode*> set;
        while(head)
        {
            if(set.find(head) != set.end()) return true;
            set.insert(head);
            head = head->next;
        }
        return false;
    }
};