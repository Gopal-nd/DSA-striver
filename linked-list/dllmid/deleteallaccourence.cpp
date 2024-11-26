Node* deleteallaccourence(Node* head,int key){

Node* temp = head;

  while (temp!=head) {
    if(temp->val==key){
      if(temp==head){
        head = head ->next;
      }
      nextNode = temp->next;
      prevNode = temp->prev;
      if(nextNode) nextNode -> prev = prevNode;
      if(prevNode) prevNode -> next = nextNode;
      free(temp):
      temp = nextNode;
    }else {
      temp=temp->next;
    }

    return head;
  }




  return head;
}
