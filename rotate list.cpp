
class Solution {
public:
     ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL) {
            temp=temp->next;
            count++;
        }
        
        k = k%count;

        if(k==0) {
            return head;
        }

        ListNode* slow=head, *fast=head;
        while(k) {
            fast=fast->next;
            k--;
        }
        while(fast->next!=NULL) {
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
        return head;
    }
};
