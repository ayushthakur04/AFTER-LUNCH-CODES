SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head,int data) {
 
        SinglyLinkedListNode* n=new SinglyLinkedListNode(data);
        
        SinglyLinkedListNode* last=head;
        if(head==NULL)
        {
            return n;
        }
        
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=n;
        return head;
 
     

}
