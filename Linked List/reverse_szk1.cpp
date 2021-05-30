//   https://leetcode.com/problems/reverse-nodes-in-k-group/

//    The remaining nodes are expected to be as given.

ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        if(cnt < k)return head;
        
        temp = head;cnt = 0;
        ListNode* prev = NULL,*next = temp;
        while(temp != NULL && cnt < k){
            next = next->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            cnt++;
        }
        if(next != NULL)head->next = reverseKGroup(next,k);
        
        return prev;
    }
