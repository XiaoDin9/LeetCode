ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    ListNode* l11 = l1;
    ListNode* l22 = l2;
    ListNode* ans =new ListNode(0);
    ListNode* ANS;
    int ost = 0;
    bool op = true;
    while (l11 || l22){
        int val = ost;
        if (l11) val+=l11->val;
        if (l22) val+=l22->val;
        ans->next = new ListNode(val%10);
        if (op){
            ANS = ans->next;
            op = false;
        }
        ost = val/10;
        ans = ans->next;
        if (l11) l11 = l11->next;
        if (l22) l22 = l22->next;
    }
    if (ost){
        ans->next = new ListNode(1);
    }
    return ANS;
}

