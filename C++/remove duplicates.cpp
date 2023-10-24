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
    ListNode* deleteDuplicates(ListNode* head) {
       
        
        ListNode* ptr=head;
        ListNode* temp;
        
       
        while(ptr!=NULL&&ptr->next!=NULL)
        {
             temp=ptr->next;
            if(ptr->val==temp->val)
            {
               
                if(temp->next!=NULL)
                ptr->next=temp->next;
                else
                ptr->next=NULL;
               
            }
            else
             ptr=ptr->next;
            
        }
        ptr=head;
         while(ptr!=NULL)
         {
             cout<<ptr->val<<endl;
             ptr=ptr->next;

         }

        return head;
    }
};
