Node* findTile(Node* head){
  Node* tail = head;
  while (tail->next!=NULL) {
    tail=tail->next;
  }
  return tail;
}

vector<pair<int,int>> findpairs(Node* head,int sum){
  vector<pair<int,int> ans;
  if(head==NULL) return ans;
  Node* left = head;
  Node* rigth = findTile(head);

  while (left->data < right->data) {
    if(left->data +right->data==sum){
      ans.push_back({left->data,right->data});
      left = left->next;
      rigth = rigth->next;
    }else if (left->data + rigth->data <k) {
      left= left->next;
    }else {
      rigth =rigth->next;
    }
  }
  return ans;
}
