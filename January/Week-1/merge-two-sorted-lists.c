/**
 * 
 * Merge two sorted linked lists 
 * and return it as a sorted list. 
 * The list should be made 
 * by splicing together 
 * the nodes of the first two lists.
 * 
 * */


struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
        
        if (!l1) return l2;
        if (!l2) return l1;

        struct ListNode* result;

        if (l1->val < l2->val) {
            result = l1;
            l1 = l1->next;
        }

        else {
            result = l2;
            l2 = l2->next;
        }

        struct ListNode* temp = result;

        while (l1 && l2) {

            if (l1->val < l2->val) {
                temp->next = l1;
                l1 = l1->next;

            } else {
                temp->next = l2;
                l2 = l2->next;
                
            }
            
            temp = temp->next;
        }

        while (l1) {
            temp->next = l1;
            l1 = l1->next;
            temp = temp->next;
        }

        while (l2) {
            temp->next = l2;
            l2 = l2->next;
            temp = temp->next;
        }

        return result;
}