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
    ListNode* deleteMiddle(ListNode* head) {
        
        int length = 0;        
        ListNode* curr = head;
        
        while(curr != nullptr){
            length++;
            curr = curr->next;
        }
        
        if(length == 1) return NULL;
        int mid = length/2;
        
        // cout<<mid;
        ListNode* temp = head;
        for(int i=0; i<mid-1;i++){
            temp = temp->next;
        }
        // cout<<temp->val;
        temp->next = temp->next->next;
        return head;
        
    }
};