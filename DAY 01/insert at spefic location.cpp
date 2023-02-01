SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
SinglyLinkedListNode* n=new SinglyLinkedListNode(data);
   SinglyLinkedListNode* ptr=llist;
   while(position!=1)
   {
       ptr=ptr->next;
       position--;
   }
   n->next=ptr->next;
   ptr->next=n;
   return llist;
   
}
