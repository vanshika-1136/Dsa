// if tail bhi chahiye after deletion then take prev poiter with curr in deletion func
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
     this->data=data;
     this->next=NULL;
    }

    ~Node(){
     int value=this->data;
     if(this->next!=NULL){
        delete next;
        this->next=NULL;
     }
     cout<<"Memory free for "<<value<<endl;
    }
};
void insertAtHead(Node* &head,int d)
{
 Node* temp= new Node(d);
 temp->next=head;
 head=temp;
}

void insertAtTail(Node* & tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node* &head,Node* &tail, int d, int position){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;  
    }
    
    if(temp->next==NULL){
      insertAtTail(tail,d);
      return;
    }
    Node* NodeToInsert=new Node(d);
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;
}

void deletion(Node* &head,Node* &tail,int position){
    Node* temp=head;
   if(position==1){
    
    head=head->next;
    temp->next=nullptr;
    delete temp;
    return;
   } 
   int cnt=1;
   while(cnt<position-1){
    cnt++;
    temp=temp->next;
   }

   Node* nodeToDelete=temp->next;
   if(temp->next->next==nullptr){
      tail=temp;
   }
   temp->next=temp->next->next;
   nodeToDelete->next=nullptr;
   delete nodeToDelete;

   
}
void deletion2(Node* &head,Node* &tail,int value){
    Node* temp=head;
   if(temp->data==value){
    
    head=head->next;
    temp->next=nullptr;
    return;
   } 
   
   while(temp->next->data!=value){
    temp=temp->next;
   }
   if(temp->next==nullptr){
    cout<<"No such vale node exist"<<endl;
   }
      if(temp->next->next==nullptr){
      tail=temp;
   }
   Node* nodeToDelete=temp->next;
   temp->next=temp->next->next;
   nodeToDelete->next=nullptr;
    delete nodeToDelete;
}
void print(Node* & head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
int main(){
   Node* node1=new Node(10);
   Node* tail=node1;
   Node* head=node1;
   insertAtHead(head,40);
   insertAtHead(head,50);
   insertAtHead(head,60);
   insertAtHead(head,70);
   
   insertAtTail(tail,90);
   insertAtPosition(head,tail,90,1);
//    print(head);
   insertAtTail(tail,80);
   print(head);
//    cout<<head->data<<endl;
//    cout<<tail->data<<endl;
   deletion(head,tail,1);
   print(head);
   deletion(head,tail,5);
   print(head);
   deletion(head,tail,6);
   print(head);
//    deletion(head,tail,1);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;
   deletion2(head,tail,70);
   print(head);
   deletion2(head,tail,50);
   print(head);
   deletion2(head,tail,90);
   print(head);
       cout<<head->data<<endl;
    cout<<tail->data<<endl;
}