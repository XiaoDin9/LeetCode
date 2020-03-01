ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    assert(l1 != NULL && l2 != NULL);

    ListNode *cur1 = l1;
    ListNode *cur2 = l2;
    ListNode newLinkHead(0);
    ListNode *curNew = &newLinkHead;

    int jinWeiValue = 0;
    int TwoSumValue = 0;
    while (cur1 != NULL && cur2 != NULL) {
        TwoSumValue = cur1->val + cur2->val + jinWeiValue;
        jinWeiValue = TwoSumValue / 10;
        ListNode *newNode = new ListNode(TwoSumValue % 10);
        curNew->next = newNode;
        curNew = newNode;
        cur1 = cur1->next;
        cur2 = cur2->next;
    }

    while (cur1 != NULL) {
        TwoSumValue = cur1->val + jinWeiValue;
        jinWeiValue = TwoSumValue / 10;
        ListNode *newNode = new ListNode(TwoSumValue % 10);
        curNew->next = newNode;
        curNew = newNode;
        cur1 = cur1->next;
    }
    while (cur2 != NULL) {
        TwoSumValue = cur2->val + jinWeiValue;
        jinWeiValue = TwoSumValue / 10;
        ListNode *newNode = new ListNode(TwoSumValue % 10);
        curNew->next = newNode;
        curNew = newNode;
        cur2 = cur2->next;
    }
    
    if(jinWeiValue)
    {
        ListNode *newNode = new ListNode(jinWeiValue);
        curNew->next = newNode;
        curNew = newNode;
    }
    
    return newLinkHead.next;
}
