class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        
        if(head == NULL || head->next == NULL) return head;
        
        DLLNode* temp = head;
        stack<int> st;
        
        while(temp!=NULL){
            st.push(temp->data);
            temp = temp->next;
        }
        
        temp = head;
        
        while(temp!=NULL){
            temp->data = st.top();
            
            st.pop();
            temp = temp->next;
        }
        
        return head;
    }
};
