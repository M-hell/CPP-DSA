class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
       ListNode *curr=head;
       unordered_map<ListNode*,bool>map1;
       while(curr!=NULL){
           if(map1[curr]==true){
               return true;
           }
           map1[curr]=true;
           curr=curr->next;
       }
       return false; 
    }
};