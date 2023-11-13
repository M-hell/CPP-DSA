bool isPalindrome(ListNode* head) {
        if(head->next==nullptr)
        {
            return true;
        }
        stack<int>st;
        ListNode* temp=head;
        while(temp!=nullptr){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode* temp1=head;
        while(temp1!=nullptr){
            if(st.top()!=temp1->val)
            {
                return false;
            }
            st.pop();
            temp1=temp1->next;
        }
        return true;
    }