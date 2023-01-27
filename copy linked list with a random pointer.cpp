

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> hash;
        Node *ptr=head;        
        while(ptr!=NULL){
            Node *copiedNode=new Node(ptr->val);
            hash[ptr]=copiedNode;
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr!=NULL)
        {
            
            Node* copied=hash[ptr];
            copied->next=hash[ptr->next];
            copied->random=hash[ptr->random]; 
            ptr=ptr->next; 
        }
            return hash[head];
        }
   
};
