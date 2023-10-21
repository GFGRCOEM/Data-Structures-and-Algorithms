void deleteNode(ListNode *node)
{
    ListNode *temp = node->next;     //point to the next node

    node->val = temp->val;             // copy the value of next node to the current node
    node->next = temp->next;   // point the current node to next->next node
}