class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = reverselist(l1);
        unsigned long long int rev1 = 0;
        while (l3 != nullptr) {
            rev1 = rev1 * 10 + l3->val;
            l3 = l3->next;
        }

        ListNode* l4 = reverselist(l2);
        unsigned long long int rev2 = 0;
        while (l4 != nullptr) {
            rev2 = rev2 * 10 + l4->val;
            l4 = l4->next;
        }

        unsigned long long int total = rev1 + rev2;
        if (total == 0) {
            ListNode* newnode = new ListNode(0);
            return newnode;
        }

        string str = to_string(total);
        ListNode* head = new ListNode();
        ListNode* temp = head;
        for (int i = 0; i < str.size(); i++) {
            int rem = total % 10;
            ListNode* newnode = new ListNode(rem);
            temp->next = newnode;
            temp = newnode;
            total = total / 10;
        }

        return head->next;
    }

    ListNode* reverselist(ListNode* l) {
        ListNode* prev = nullptr;
        ListNode* curr = l;
        while (curr != nullptr) {
            ListNode* after = curr->next;
            curr->next = prev;
            prev = curr;
            curr = after;
        }
        return prev;
    }
};
