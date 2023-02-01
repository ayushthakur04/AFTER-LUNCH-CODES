SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
SinglyLinkedListNode *previous=llist,*current=llist;
    int count=0;
   int count1=0;
   if(position==0)
   {
       llist=current->next;
       
   }
   else{
    while(count<(position-1))
    {
        previous=previous->next;
        count++;
    }
    while(count1<(position+1))
    {
        current=current->next;
        count1++;
    }
    previous->next=current;
   }
    return llist;
}
