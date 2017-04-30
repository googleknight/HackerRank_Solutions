//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *ptr=head;
    Node *new_ptr=new Node;
    (new_ptr)->data=data;
    (new_ptr)->next=NULL;
    if(ptr!=NULL)
    {
        while(ptr->next!=NULL)
            ptr=ptr->next;
        (ptr)->next=new_ptr;
        return head;
    }
    else
        return new_ptr;
  // Complete this method
}
