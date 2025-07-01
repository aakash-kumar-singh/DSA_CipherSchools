#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;

  Node(int val){
    data=val;
    next=NULL;
  }

};
void insertAtEnd(Node* &head,int val){
  Node* n=new Node(val);
  if(head==NULL){
    head=n;
    return;
  }
  Node* temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=n;
}
void insertAtBegin(Node* &head,int val){

}
void insertAtPos(Node* &head,int pos,int val){
  if(pos==0){
    insertAtBegin(head,val);
  }
  Node* n=new Node(val);
  Node* temp = head;
  for(int i=0;i<pos-1;i++){
    temp=temp->next;
  }
  n->next=temp->next;
  temp->next=n;
}
void deleteEnd(Node* &head){
  if(head==NULL){
    return;
  }
  if(head->next==NULL){
    delete head;
    head=NULL;
    return;
  }
  Node* temp=head;
  while(temp->next->next!=NULL){
    temp=temp->next;
  }
  
  delete temp->next;
  temp->next=NULL;
}
void deleteFromBegin(Node* &head){

}
void deleteFromPos(Node* &head,int pos){
  if(head==NULL) return;
  if(pos==0){
    deleteFromBegin(head);
  }
  Node* temp=head;
  for(int i=0;i<pos-1;i++){
    temp=temp->next;
  }
  Node* toDel=temp->next;
  temp->next=temp->next->next;
  delete toDel;
}
void display(Node* head){
  Node* temp=head;
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  
}
int main(){
  Node* head=NULL;
  insertAtEnd(head,10);
  insertAtEnd(head,20);
  insertAtEnd(head,30);
  insertAtEnd(head,40);
  display(head);
}