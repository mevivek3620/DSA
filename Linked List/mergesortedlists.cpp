//   https://leetcode.com/problems/merge-two-sorted-lists/

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)return l2;
        if(l2 == NULL)return l1;
        
        ListNode* p = NULL;
        
        if(l1->val < l2->val){
            p = l1;
            l1 = l1->next;
        }
        else{
            p = l2;
            l2 = l2->next;
        }
        
        ListNode* ans = p;
        
        while(l1 && l2){
            if(l1->val <l2->val){
                p->next = l1;
                p = l1;
                l1 = l1->next;
            }
            else{
                p->next = l2;
                p = l2;
                l2 = l2->next;
            }
        }
        
        if(l1){
            p->next = l1;
        }
        else{
            p->next = l2;
        }
        // cout<<sizeof(l1)<<" "<<sizeof(l2)<<" "<<sizeof(p)<<" "<<sizeof(ans)<<endl;
        return ans;
    }