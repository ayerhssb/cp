class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        Node* temp = head;
        int cnt = 0;
        
        if(x == 1) {
            head = head-> next;
            temp->next = nullptr;
            temp->prev = nullptr;
            return head;
        }
        
        while(temp->next!=nullptr){
            cnt++;
            if(cnt == x) break;
            temp = temp->next;
        }
        if(temp-> next != NULL)temp->next->prev = temp->prev;
        if(temp-> prev != NULL)temp->prev->next = temp->next;
        
        temp->next = nullptr;
        temp->prev = nullptr;
        
        // if (head == temp)
        // head = temp -> next;
        free(temp);
        return head;
        
    }
};
