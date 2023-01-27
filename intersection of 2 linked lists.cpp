class Solution {
public:
     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1=0, count2=0;
        ListNode *curr1=headA, *curr2=headB;
        ListNode *point1=headA, *point2=headB;

        while(curr1!=NULL) {
            curr1=curr1->next;
            count1++;
        }

        while(curr2!=NULL) {
            curr2=curr2->next;
            count2++;
        }

        int diff = abs(count1-count2);

        curr1=headA, curr2=headB;
        if(count1>count2) {
            for(int i=0; i<diff; i++) {
                curr1=curr1->next;
            }
        }

        else if(count1<count2) {
            for(int i=0; i<diff; i++) {
                curr2=curr2->next;
            }
        }

        while(curr1!=NULL) {
            if(curr1 == curr2) return curr1;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return NULL;
    }
    
};
