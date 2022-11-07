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
    ListNode* removeElements(ListNode* head, int val) {
        
        vector<int> ans;        
        ListNode* curr = head;
        ListNode* temp = new ListNode(0);
        
        while(curr){
            if(curr->val != val){
                ans.push_back(curr->val);
                curr= curr->next;
            }
            else curr= curr->next;
        }
        ListNode*p = temp;
        
        for(int i=0;i<ans.size();i++)
        {
            p->next = new ListNode(ans[i]);
            p=p->next;
        }
        return temp->next;
    }
};