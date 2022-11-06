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
        
        ListNode* curr = head;
        int count=0;
        
        while(curr){
            curr = curr->next;
            count++;
        }
        if(count == n) return head->next;
        
        ListNode* temp = head;
        
        for(int i=1;i<count-n;i++){
            temp = temp->next;
        }
        cout<<temp->val;
        temp->next = temp->next->next;
        return head;
    }
};